/* Mostra todos os divisores de um número e quantos divisores ele tem */
#include <stdio.h>

int main(void) {
int num;
int quantidade = 0;

printf("Digite um numero: ");
scanf("%d", &num);

int divisores[num];

int i;
printf("todos os divisores: ");
for(i=1; i<=num; i++){
    if (num % i == 0){
        printf("%d ", i);
        divisores[quantidade] = i;
        quantidade++;
    }
}
printf("\nnumero de divisores: %d \n", quantidade);

return 0;
}