/* Crie um programa que permite o professor cadastrar e exibir as notas de duas turmas (turma 1 e turma 2) pelas quais é responsável. 
Cada turma possui exatamente 10 alunos e cada aluno possui 2 notas (referente à duas unidades). Crie uma matriz bidimensional para 
guardar o nome dos alunos de cada turma e uma outra matriz tridimensional para cadastrar as notas dos 10 alunos de cada turma. Por 
fim, exiba as informações referentes a cada turma, exibindo o número da turma (1 e 2), e os alunos com as respectivas notas. */
#include <stdio.h>

int main(void) {
    int matriz_tridimensional[2][10][2];
    char matriz_bidimensional[2][10][40] = {{"Turma 1", "Turma 2"}, {}, {}};

    // Preenche a matriz bidimensional
    for(int turmas=0; turmas<2; turmas++){
        printf("\nTurma: %d\n", turmas+1);
        for(int alunos=0; alunos<10; alunos++){
            printf("Digite o nome do aluno %d: ", alunos+1);
            scanf("%s", &matriz_bidimensional[turmas][alunos]);
        }
    }

    // Preenche a matriz tridimensional
    for(int turmas=0; turmas<2; turmas++){
        printf("\nTurma: %d\n", turmas+1);
        for(int alunos=0; alunos<10; alunos++){
            printf("Aluno %s:\n", matriz_bidimensional[turmas][alunos]);
            for(int notas=0; notas<2; notas++){
                float nota;
                printf("Digite a %d nota: ", notas+1);
                scanf("%f", &nota);
                matriz_tridimensional[turmas][alunos][notas] = nota;
            }
        }
    }

    // Exibe as duas matrizes como uma só
    printf("\n");
    for(int turmas=0; turmas<2; turmas++){
        printf("|=-=-=-=-=-=-=-= Turma %d =-=-=-=-=-=-=-=|\n", turmas+1);
        for(int alunos=0; alunos<10; alunos++){
            printf("| Aluno: %d | Nome: %s |", alunos+1, matriz_bidimensional[turmas][alunos]);
            for(int notas=0; notas<2; notas++){
                float nota;
                printf(" nota %d = %d |", notas+1, matriz_tridimensional[turmas][alunos][notas]);
            }
            printf("\n");
        }
    }


    return 0;
}








