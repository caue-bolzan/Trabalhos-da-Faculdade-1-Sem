#include <stdio.h>
int main (){
  int idade;
  int alfabetizado;

  printf("Quantos anos você tem? \n");
  scanf("%d", &idade);
  
  printf("Você é alfabetizado?0-Não, 1-Sim \n");
  scanf("%d", &alfabetizado);

  if (idade < 16){
    printf("Não vota");
  } else if ((idade > 17 && idade < 71) && (alfabetizado == 1)){
    printf("Voto Obrigatorio");
  } else {
    printf("Voto facultativo");
  }
  return 0;
}
