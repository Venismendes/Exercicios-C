/* Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas 
provas (P1 e P2) iniciais; se a média nessas duas provas for maior ou igual a 5.0, e se nenhuma 
das duas notas for inferior a 3.0, o aluno passa direto. Caso contrário, o aluno faz uma 
terceira prova (P3) e a média é calculada considerando-se essa terceira nota e a maior das 
notas entre P1 e P2. Neste caso, o aluno é aprovado se a média final for maior ou igual a 5.0. 
Escreva um programa que leia inicialmente as duas notas de um aluno, fornecidas pelo usuário 
via teclado. Se as notas não forem suficientes para o aluno passar direto, o programa deve 
capturar a nota da terceira prova, também fornecida via o teclado. Como saída, o programa deve 
imprimir a média final do aluno, seguida da mensagem "Aprovado" ou "Reprovado", conforme o 
critério descrito acima. Média de aprovação 5 */
#include <stdio.h>
int main(void) {
  float nota_p1;
  float nota_p2;
  
  printf("Digite a primeira nota: ");
  scanf("%f", &nota_p1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota_p2);
  
  float media = (nota_p1 + nota_p2) / 2;
  if(media < 5 && nota_p1 > 3 && nota_p2 > 3){
      float nota_p3;
      printf("Uma das notas nao foi suficiente digite a terceira nota: ");
      scanf("%f", &nota_p3);
      if (nota_p1 >= nota_p2) {
          nota_p2 = nota_p3;
      } else {
          nota_p1 = nota_p3;
      }
      media = (nota_p1 + nota_p2) / 2;
      
      if (media >= 5){
        printf("media %.2f Aprovado!.", media);
      } else {
        printf("media %.2f Reprovado!.", media);
      }
  } else if (media >= 5 && nota_p1 > 3 && nota_p2 > 3){
      printf("media %.2f Aprovado!.", media);
  } else {
      printf("%.2f Reprovado!. Uma das notas foi insuficiente!", media);
  }
  
  return 0;
}
