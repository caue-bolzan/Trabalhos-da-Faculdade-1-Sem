#include <stdio.h> 
int main (){
  int n1;
  int n2;
  int n3;
  int n4;
  int maior;
  
  printf("Digite o primeiro numero: \n");
  scanf("%d", &n1);
  maior = n1;
  
  printf("Digite o segundo numero: \n");
  scanf("%d", &n2);
  if (maior < n2){
    maior = n2
  }
  
  printf("Digite o terceiro numero: \n");
  scanf("%d", &n3);
  if (maior < n3){
    maior = n3
  }
  
  printf("Digite o ultimo numero: \n");
  scanf("%d", &n4);  
  if (maior < n4){
    maior = n4
  }
  printf("o seu maior numero é %d", maior);
  return 0;
}
