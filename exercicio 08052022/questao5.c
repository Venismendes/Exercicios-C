/* Notas de uma turma de acordo com o gabarito */
#include <stdio.h>

int main(void) {

char gabarito[5];
int i;
printf("Digite as respostas do gabarito a seguir.\n");
for(i=0; i<5; i++){
    printf("Resposta da questao %d: ", i+1);
    scanf("%s", &gabarito[i]);
}

int quantidade_alunos;
printf("Quantos alunos possui a turma: ");
scanf("%d", &quantidade_alunos);

int alunos[quantidade_alunos];
float notas[quantidade_alunos];

int contador;
float nota;
char resposta;
printf("Preencha os cartoes de respostas a seguir.\n");
for(i=0; i<quantidade_alunos; i++){
    nota = 0.0;
    printf("Numero do aluno: ");
    scanf("%d", &alunos[i]);
    for(contador=0; contador<5; contador++){
        printf("Resposta do aluno na questao %d: ", contador+1);
        scanf("%s", &resposta);
        if(resposta == gabarito[contador]){
            nota = nota + 2.0;
        }
    }
    notas[i] = nota;
}

for(i=0; i<quantidade_alunos; i++){
    printf("Nota do aluno %d é igual a %f", alunos[i], notas[i]);
}

return 0;
}