#include<stdio.h>

int main(){
  int tamanho, maximo;
  
  printf("Quantos vertices possui o grafo: ");
  scanf("%d", &tamanho);
  printf("Qual o grau máximo: ");
  scanf("%d", &maximo);
  
  int mat[tamanho][maximo];
  for(int i=0; i<tamanho; i++){
    int tam;
    printf("quantas ligacoes possui o vertice %d:", i);
    scanf("%d", &tam);
    
    for(int j=0; j<tam; j++){
      printf("Digite a %d ligação, do vertice %d:", j+1, i);
      scanf("%d", &mat[i][j]);
    }
  }
  
  for(int i=0; i<tamanho; i++){
    printf("Ligações do vertice %d: ", i);
    for(int j=0; j<maximo; j++){
      if((mat[i][j]) >= 0 && mat[i][j] < maximo){
        printf("-> %d ", mat[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}
