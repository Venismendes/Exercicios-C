/* Construa um programa que receberá 100 valores inteiros. Ao final, o algoritmo irá imprimir o menor valor recebido. 
O índice em que o menor valor está armazenado. Por último, os valores armazenados nas posições imediatamente anterior e posterior 
ao menor elemento encontrado. Obedeça o seguinte formato para apresentar as informações:

Caso o menor valor esteja na primeira posição, seu algoritmo não deve imprimir a linha correspondente ao elemento anterior e 
se estiver na última posição, não deve imprimir o elemento posterior. */
#include <stdio.h>

int main(void) {
int vetor[100];

int i;
for(i=0; i<100; i++){
    printf("Digite o %d valor: ", i+1);
    scanf("%d", &vetor[i]);
}

int menor = vetor[0];
int indice = 0;
for(i=0; i<100; i++){
    if (vetor[i] < menor){
        menor = vetor[i];
        indice = i;
    }
}
printf("Menor valor: %d\n", menor);
printf("Indice do menor: %d\n", indice+1);
if (indice > 0){
    printf("Valor anterior [%d]: %d\n", indice, vetor[indice-1]);
}
if (indice < 99){
    printf("Valor posterior [%d]: %d\n", indice+2, vetor[indice+1]);
}

return 0;}














