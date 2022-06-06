/*Crie um programa que receba como entrada 10 valores que serão armazenados em um vetor, depois a entrada de mais um valor. Após isso o programa deverá buscar se o 
último valor inserido está no vetor. Para resolver esta questão utilize funções e procedimentos, bem como os algoritmos BubbleSort, para ordenar o vetor, e a busca 
binária apresentados neste material, para buscar o valor.*/
#include <stdio.h>

int busca(int vetor[], int tamanho, int valor){
  int inicio = 0;
  int fim = tamanho;
  int tentativa = fim/2;
  int anterior = tentativa;
  
  if(valor == vetor[0]){
    return 0;
  }
  
  while(valor != vetor[tentativa]){
    if(valor > vetor[tentativa]){
      inicio = tentativa;
      tentativa += (fim-tentativa) / 2;
    } else {
      fim = tentativa;
      tentativa -= (tentativa-inicio) / 2;
    }

    if(anterior == tentativa){
      printf("Valor não existe no vetor!\n");
      return -1;
    }
    anterior = tentativa;
  }
  return tentativa;
}


void organizar_vetor(int vetor[], int tamanho){
  int organizado[tamanho];

  for(int i=0; i<tamanho; i++){
    printf("Digite um valor: ");
    scanf("%d", &vetor[i]);
  }

  int maior = vetor[9];
  for(int i=0; i<tamanho; i++){
    if (vetor[i] > maior){
      maior = vetor[i];
    }
  }
  
  for(int i=0; i<tamanho; i++){
    int menor = vetor[0];
    int indice = 0;
    for(int c=0; c<tamanho; c++){
      if (vetor[c] < menor){
        menor = vetor[c];
        indice = c;
      }
    }
  
    vetor[indice] = maior+1;
    organizado[i] = menor;
  }
  for(int i=0; i<tamanho; i++){
    vetor[i] = organizado[i];
  }
}

int main(void) {
  int tam = 10;
  int vetor[tam];
  organizar_vetor(vetor, tam);
  printf("Ordem crescente: ");
  for(int i=0; i<tam; i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");
  
  int valor;
  printf("Digite mais 1 valor: ");
  scanf("%d", &valor);
  printf("o valor foi encontrado na posição %d", busca(vetor, tam, valor)+1);
  
  return 0;
}
