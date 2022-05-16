/*Construa um programa com uma matriz de 10 linhas e 3 colunas. O seu programa receberá uma quantidade indefinida de números 
inteiros, até que o valor -1 seja informado. Os números ímpares deverão ser armazenados na primeira coluna da matriz (lateral 
esquerda) e os pares na terceira coluna (lateral direita). Se as colunas da esquerda ou da direita ficarem cheias (completarem 
as 10 posições) durante a leitura dos valores, você deverá "mover" o valor mais antigo (a posição mais acima da coluna) para a 
coluna central e, então, deslocar os elementos subsequentes em "uma casa para cima", para que seja possível armazenar o valor 
na 10ª posição da coluna. Repita essa operação quantas vezes for necessário. Caso a coluna central seja completamente preenchida, 
descarte o valor mais antigo (a primeira linha da coluna) e, então, mova os valores em uma linha para cima e armazene o novo valor 
na 10ª posição da coluna. Seu programa encerra quando o valor -1 for recebido (não armazene o valor -1). Caso ainda restem 
posições vazias na matriz, essas deverão ser preenchidas com 0 (zero). Ao final, o programa deverá escrever a matriz 10x3. */
#include <stdio.h>

int main(void) {
int matriz[3][10];
for(int c=0; c<3; c++){ for(int l=0; l<10; l++){ matriz[c][l] = 0;}}

int valor = 0;
int indice_impar = 0;
int indice = 0;
int indice_par = 0;
while(valor != -1){
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if (valor == -1){ break; }

    if (valor % 2 == 1 && valor != -1){
        if (indice_impar < 10){
            matriz[0][indice_impar] = valor; 
            indice_impar++;
        } else {
            if (indice < 10){ 
                matriz[1][indice] = matriz[0][0]; 
                indice++;
            } else {
                for(int i=0; i<9; i++){ matriz[1][i] = matriz[1][i+1]; }
                matriz[1][9] = matriz[0][0];
            }

            for(int i=0; i<9; i++){ matriz[0][i] = matriz[0][i+1]; }
            matriz[0][9] = valor;
        }
    } else if (valor % 2 == 0 && valor != -1){
        if (indice_par < 10){ 
            matriz[2][indice_par] = valor; 
            indice_par++;
        } else {
            if (indice < 10){ 
                matriz[1][indice] = matriz[2][0]; 
                indice++;
            } else {
                for(int i=0; i<9; i++){ matriz[1][i] = matriz[1][i+1]; } 
                matriz[1][9] = matriz[2][0];
            }

            for(int i=0; i<9; i++){ matriz[2][i] = matriz[2][i+1]; }
            matriz[2][9] = valor;
        }
    }
}

for(int l=0; l<10; l++){
    for(int c=0; c<3; c++){
        printf("%d ", matriz[c][l]);
    } printf("\n");
}

return 0;}