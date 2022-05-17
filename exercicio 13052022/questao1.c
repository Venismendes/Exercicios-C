/* 1. Escreva um programa para ler 2 valores e uma das seguintes operações a serem executadas: 
1. Adição, 2. Subtração, 3. Divisão, 4. Multiplicação 
Em seguida o programa deve calcular e escrever o resultado da operação escolhida sobre os dois valores lidos. */
#include <stdio.h>
int main(void) {
int num1;
int num2;
  
printf("Digite um numero: ");
scanf("%d", &num1);

printf("Digite outro numero: ");
scanf("%d", &num2);

char operacao[2];
printf("Digite qual das operacoes [+, -, /, *] deseja executar: ");
scanf("%s", &operacao);

if(operacao[0] == '+'){
    printf("%d + %d = %d", num1, num2, num1+num2);
} else if (operacao[0] == '-') {
    printf("%d - %d = %d", num1, num2, num1-num2);
} else if (operacao[0] == '/') {
    float div = num1 / num2;
    printf("%d / %d = %f", num1, num2, div);
} else if (operacao[0] == '*') {
    printf("%d * %d = %d", num1, num2, num1*num2);
}
return 0;}

