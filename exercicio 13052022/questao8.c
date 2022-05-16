/* Construa um programa que receberá valores inteiros em quantidade suficiente para montar uma matriz 5x5. Em seguida, 
o algoritmo deverá escrever a matriz na ordem em que foi montada (da esquerda para direita, de cima para baixo). Ao final, 
acrescente uma linha em branco e, então, faça a impressão da matriz transposta correspondente.*/
#include <stdio.h>

int main(void) {
int matriz[25];

int i;
printf("Preencha a matriz abaixo!\n");
for(i=0; i<25; i++){
    printf("Digite um numero: ");
    scanf("%d", &matriz[i]);
}

int c = 0;
printf("Matriz:\n");
for(i=0; i<25; i++){
    if (c >= 5){c = 0; printf("\n");}
    printf("%d ", matriz[i]);
    c++;
}

int transposta[5][5];
int l = 0;
int indice = 0;
for(c=0; c<5; c++){
    for(l=0; l<5; l++){
        transposta[c][l] = matriz[indice];
        indice++;
    }
}

printf("\n\nTransposta:\n");
for(int c=0; c<5; c++){
    for(int l=0; l<5; l++){
        printf("%d ", transposta[l][c]);
    }
    printf("\n");
}


return 0;}
