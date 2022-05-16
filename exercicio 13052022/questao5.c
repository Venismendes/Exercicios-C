/* 5. Faça as seguintes alterações no jogo da senha (exercício 4): 
a) se o valor digitado em uma tentativa tiver uma diferença igual a 1 para a senha, o programa deve avisar que “TÁ QUENTE!”. 
Neste caso, nenhuma outra mensagem deve ser emitida. Nos demais casos, continuam valendo as mensagens exibidas no exercício anterior. 
Exemplos:  
senha 43 e valor digitado 42 : TÁ QUENTE!!!  
senha 43 e valor digitado 44 : TÁ QUENTE!!!; 
b) Ao final do jogo, se for o caso, enviar a mensagem “Você perdeu. Tente novamente depois”; 
c) Ao final de uma partida, permita ao usuário jogar novamente. */
#include <stdio.h>

int main(void) {
int senha;
int tentativa;
int cont;
char jogar_novamente = 's';
while(jogar_novamente == 's'){
    printf("Jogador 1 digite uma senha entre 1 e 100: ");
    scanf("%d", &senha);
    printf("Jogador 2 tente acertar a senha: ");
    int i;
    for(i=0;i<5;i++){
        scanf("%d", &tentativa);
        if(tentativa == senha){
            printf("Voce acertou!!");
            break;
        } else if (tentativa == (senha-1) || tentativa == (senha+1)){
            printf("TA QUENTE!!!!!!: ");
        } else if (tentativa > senha){
            printf("Voce errou, tente um valor menor: ");
        } else if (tentativa < senha){
            printf("Voce errou, tente um valor maior: ");
        }
        cont++;
    }
    if (cont > 5 && senha != tentativa) {
        printf("\nVoce perdeu, tente novamente depois! Limite de tentativas atingido.");
    }
    printf("\nDeseja jogar novamente? [s, n]: ");
    scanf("%s", &jogar_novamente);
}
return 0;}


