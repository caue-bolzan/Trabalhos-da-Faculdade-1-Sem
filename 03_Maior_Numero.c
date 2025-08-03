#include <stdio.h> 
int main (){
  float n1;
  float n2;
  float n3;
  float n4;
  float maior;
  
  printf("Digite o primeiro numero: \n");
  scanf("%f", &n1);
  maior = n1;
  
  printf("Digite o segundo numero: \n");
  scanf("%f", &n2);
  if (maior < n2){
    maior = n2;
  }
  
  printf("Digite o terceiro numero: \n");
  scanf("%f", &n3);
  if (maior < n3){
    maior = n3;
  }
  
  printf("Digite o ultimo numero: \n");
  scanf("%f", &n4);  
  if (maior < n4){
    maior = n4;
  }
  printf("o seu maior numero é %f", maior);
  return 0;
}
