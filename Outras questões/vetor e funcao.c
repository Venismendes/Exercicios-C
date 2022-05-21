/* Escreva um código em C que leia um vetor com 5 valores, depois leia mais um valor para uma variável qualquer. 
Em seguida busque esse valor no vetor e armazene a posição desse valor no vetor. Por fim, através de uma função altere o valor 
da posição encontrada no vetor por um novo valor a ser inserido pelo usuário.*/
#include <stdio.h>

void alterar_vetor(int vetor[], int posicao){
    printf("Digite um novo valor para substituir o valor encontrado: ");
    scanf("%d", &vetor[posicao]);
}

int main(void) {
int vetor[5];
for(int i=0; i<5; i++){
    printf("Digite um valor: ");
    scanf("%d", &vetor[i]);
}

int valor;
printf("Digite o valor a ser encontrado no vetor: ");
scanf("%d", &valor);

int posicao;
for(int i=0; i<5; i++){
    if (valor == vetor[i]){
        posicao = i;
    }
}

alterar_vetor(vetor, posicao);

// Exibindo o vetor no final, para ver se o valor foi alterado
printf("Novo vetor: ");
for(int i=0; i<5; i++){
    printf("%d ", vetor[i]);
}

return 0;
}


























