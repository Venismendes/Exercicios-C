/* Mostra o produto escalar entre 2 vetores (já estão preenchidos para ser mais rápido) */
#include <stdio.h>

int main(void) {

int tamanho = 5;
int vetor1[] = {1, 2, 3, 4, 5};
int vetor2[] = {6, 7, 8, 9, 10};

int soma = 0;

int i;
for(i=0; i<tamanho; i++){
    soma = soma + vetor1[i] * vetor2[i];
}
printf("Produto escalar dos vetores = %d", soma);

return 0;
}