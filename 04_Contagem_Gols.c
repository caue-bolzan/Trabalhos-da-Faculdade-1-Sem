#include <stdio.h>
int main (){
  int gol1;
  int gol2;

  printf("Digite quantos gols o primeiro time marcou: ");
  scanf("%d", &gol1);
  
  printf("Digite quantos gols o segundo time marcou: ");
  scanf("%d", &gol2);

  if (gol1 == gol2){
    printf("Empate");
  } 
  else if (gol1 > gol2){
    printf(" Time 1 ganhou! ");
  }
  else {
    printf (" Time 2 ganhou! ");
  }
  return 0;
}
