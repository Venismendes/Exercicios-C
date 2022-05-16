/* Construa um programa que receberá 100 números inteiros. Utilizando apenas um único vetor, o seu programa deverá ordenar os 
valores lidos em ordem crescente. Ao final, o programa deverá realizar a impressão dos números ordenados (um por linha).
Exemplo: 
entrada: 10, 2, 1, 5, 6, 8, 4, 3, 9, 7.
Saída: 1 2 3 4 5 6 7 8 9 10 */
#include <stdio.h>

int main(void) {
int vetor[100];
int organizado[100];

int i;
for(i=0; i<100; i++){
    printf("Digite o %d valor: ", i+1);
    scanf("%d", &vetor[i]);
}

int maior = vetor[9];
for(i=0; i<100; i++){
    if (vetor[i] > maior){
        maior = vetor[i];
    }
}

int c;
for(i=0; i<100; i++){
    int menor = vetor[0];
    int indice = 0;
    for(c=0; c<100; c++){
        if (vetor[c] < menor){
            menor = vetor[c];
            indice = c;
        }
    }
    vetor[indice] = maior+1;
    organizado[i] = menor;
}
printf("Ordem crescente: ");
for(i=0; i<100; i++){
    printf("%d ", organizado[i]);
}

return 0;}
