/* Escreva um programa que leia três valores e apresente-os na tela em ordem crescente. */
#include <stdio.h>
int main(void) {
int valor1, valor2, valor3;
printf("Digite o primeiro valor: ");
scanf("%d", &valor1);
printf("Digite o segundo valor: ");
scanf("%d", &valor2);
printf("Digite o terceiro valor: ");
scanf("%d", &valor3);

int ordenado[] = {valor1, valor2, valor3};
int menor = valor1;
int maior = valor1;

int i;
for(i=0; i<3; i++){
    if (ordenado[i] < menor){
        menor = ordenado[i];
    }
    if (ordenado[i] > maior){
        maior = ordenado[i];
    }
}
int meio;
int repete_menor = 0;
int repete_maior = 0;
for(i=0; i<3; i++){
    if (ordenado[i] != menor && ordenado[i] != maior){
        meio = ordenado[i];
        break;
    } else if (menor == ordenado[i]){
        repete_menor++;
    } else if (maior == ordenado[i]){
        repete_maior++;
    }

    if (repete_menor>1){
        meio = menor;
    } else if (repete_maior>1){
        meio = maior;
    }
}

ordenado[0] = menor;
ordenado[1] = meio;
ordenado[2] = maior;

printf("O valores em ordem crescente: ");
for(i=0; i<3; i++){
    printf("%d ", ordenado[i]);
}
return 0;}
