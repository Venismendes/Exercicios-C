/* 4. Faça um programa que implemente o jogo da senha (para 2 pessoas): 
a) O jogador 1 digita uma senha (valor inteiro entre 0 e 100) sem o conhecimento do jogador 2; 
b) O jogador 2 tem 5 chances para descobrir a senha; 
c) A cada tentativa do jogador 2, o programa deve avisar se o valor digitado é maior, menor ou igual a senha; 
d) Se o jogador 2 acertar a senha, o programa não deve pedir mais nenhuma tentativa. */
#include <stdio.h>

int main(void) {
int senha;
printf("Jogador 1 digite uma senha entre 1 e 100: ");
scanf("%d", &senha);

int i;
int tentativa;
int cont;
printf("Jogador 2 tente acertar a senha: ");
for(i=0;i<5;i++){
    scanf("%d", &tentativa);
    if(tentativa == senha){
        printf("Voce acertou!!");
        break;
    } else if (tentativa > senha){
        printf("Voce errou, tente um valor menor! ");
    } else if (tentativa < senha){
        printf("Voce errou, tente um valor maior! ");
    }
    cont++;
}
if (cont > 5 && senha != tentativa) {
        printf("\nVoce atingiu o limite de tentativas.");
}
return 0;}




















