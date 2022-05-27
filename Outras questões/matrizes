/* 1) Com o aumento do uso dos computadores a teoria das matrizes está cada vez mais sendo aplicada em áreas como, Engenharia, Matemática, dentre outras.
Entrada: Assim o desafio é você criar um programa que peça ao usuário a quantidade de linhas e colunas de uma matriz que ele quer, nesse caso a matriz é 
sempre quadrada. Em seguida, inserir os elementos da matriz e imprimir a saída esperada.
Saída: Você deverá imprimir a matriz resultante no formato de matriz, onde os elementos da primeira linha aparecerão lado a lado, separados por um espaço 
(não deverá haver um espaço depois do último elemento de cada linha), a soma da sua diagonal principal e secundária e os elementos menores e maiores que zero.
OBS.: Cada elemento da matriz é separado por um espaço, inclusive o último elemento. Cada linha da matriz será separada por um final de linha (\n), 
inclusive depois da última. Verifique o exemplo!! */

#include <stdio.h>

int main(void){
  int tamanho;
  int cont_positivo = 0;
  int cont_negativo = 0;
  
  printf("Digite o tamanho da matriz: ");
  scanf("%d", &tamanho);

  int matriz[tamanho][tamanho];
  
  for(int linha=0; linha<tamanho; linha++){
    for(int coluna=0; coluna<tamanho; coluna++){
      printf("Digite um valor da matriz[%d, %d]: ", linha+1, coluna+1);
      scanf("%d", &matriz[linha][coluna]);
      if(matriz[linha][coluna]<0){
        cont_negativo++;
      } else if(matriz[linha][coluna] > 0) {
        cont_positivo++;
      }
    }
  }

  for(int linha=0; linha<tamanho; linha++){
    for(int coluna=0; coluna<tamanho; coluna++){
      printf("%d", matriz[linha][coluna]);
      if(coluna != tamanho-1){
        printf(" ");
      }
    } printf("\n");
  }

  int soma_principal=0;
  for(int linha=0; linha<tamanho; linha++){
    for(int coluna=0; coluna<tamanho; coluna++){
      if(coluna == linha){
        soma_principal += matriz[linha][coluna];
      }
    }
  }

  int soma_secundaria=0;
  int coluna=tamanho;
  for(int linha=0; linha<tamanho; linha++){ 
    coluna--;
    soma_secundaria += matriz[linha][coluna];
  }

  
  printf("A diagonal principal e secundária tem valores %d e %d respectivamente.\n", soma_principal, soma_secundaria);
  printf("A matriz possui %d numeros negativos\n", cont_negativo);
  printf("A matriz possui %d numeros positivos\n", cont_positivo);
  return 0;
}
