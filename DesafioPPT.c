// jogo pedra, papel e tesoura 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int escolha_usuario, escolha_pc;
int rodada = 0;
int pontos_usuario = 0;
int pontos_pc = 0;
 
srand(time(NULL));

while (rodada < 5) {
    printf("\nRodada %d de 5\n", rodada + 1);
    printf ("o que voce escolhe: 0=pedra 1=papel 2=tesoura: ");
    scanf ("%d", &escolha_usuario);

    escolha_pc = rand() % 3;

    if (escolha_usuario == 0) {
        printf("Voce escolheu: Pedra\n");
    } else if (escolha_usuario == 1) {
        printf("Voce escolheu: Papel\n");
    } else if (escolha_usuario == 2) {
        printf("Voce escolheu: Tesoura\n");
    }


    if (escolha_pc == 0){
        printf ("Computador escolheu: Pedra\n");
    }else if (escolha_pc == 1){
        printf ("Computador escolheu: Papel\n");
    }else if (escolha_pc == 2){
        printf ("Computador escolheu: Tesoura\n");
    }

    if (escolha_usuario == 0 && escolha_pc == 0) {
        printf ("Empate\n");
    }else if (escolha_usuario == 0 && escolha_pc == 1){
        printf ("Voce perdeu\n");
        pontos_pc++;
    }else if (escolha_usuario == 0 && escolha_pc == 2){
        printf ("Voce ganhou\n");
        pontos_usuario++;
    }else if (escolha_usuario == 1 && escolha_pc == 0){
        printf ("Voce ganhou\n");
        pontos_usuario++;
    }else if (escolha_usuario == 1 && escolha_pc == 1){
        printf ("Empate\n");
    }else if (escolha_usuario == 1 && escolha_pc == 2){
        printf ("Voce perdeu\n");
        pontos_pc++;
    }else if (escolha_usuario == 2 && escolha_pc == 0){
        printf ("Voce perdeu\n");
        pontos_pc++;
    }else if (escolha_usuario == 2 && escolha_pc == 1){
        printf ("Voce ganhou\n");
        pontos_usuario++;
    }else if (escolha_usuario == 2 && escolha_pc == 2){
        printf ("Empate\n");
    }
    rodada++;
}

printf("\n === Resultado Final === \n");
printf("Voce ganhou %d rodadas\n", pontos_usuario);
printf("Computador ganhou %d rodadas\n", pontos_pc);

if (pontos_usuario > pontos_pc) {
    printf("Parabens! Voce venceu o jogo!\n");
}else if (pontos_usuario < pontos_pc) {
    printf("Que pena! O computador venceu o jogo.\n");
}else {
    printf("Empate!\n");
}

return 0;
}
