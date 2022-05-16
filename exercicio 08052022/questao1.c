/* Mostra se um número é par ou impar, positivo ou negativo */
#include <stdio.h>
int main(void) {
int num;
printf("Digite um numero: ");
scanf("%d", &num);

if (num % 2 == 0 || num == 0){
  printf("O número é par");
} else {
  printf("O número é impar");
}
  
if (num > 0) {
  printf(" e positivo"); 
} else if (num < 0){
  printf(" e negativo");
} else {
  printf(" e neutro");
}

return 0;
}