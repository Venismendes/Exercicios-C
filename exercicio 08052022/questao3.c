/* Cria um vetor e mostra ele inverso */
#include <stdio.h>

int main(void) {
int tamanho;

printf("Digite o tamanho do vetor [max. 100]: ");
scanf("%d", &tamanho);
int lista[tamanho];

int i;
if (tamanho <= 100){
    for (i=0; i<tamanho; i++){
        printf("Digite o valor da posicao %d: ", i+1);
        scanf("%d", &lista[i]);
    }

    printf("Lista inversa: ");
    for (i=tamanho-1; i>=0; i--){
        printf("%d ", lista[i]);
    }
}
return 0;
}