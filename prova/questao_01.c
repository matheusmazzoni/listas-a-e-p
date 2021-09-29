#include <stdio.h>

int main(){
  int numero, i, soma=0;

  do
  {
    printf("Digite o um numero inteiro e positivo:");
    scanf("%d",&numero);
  }while(numero<0);
 
  for (i=1; i<numero; i++){
    if(numero%i==0)
      soma += i;
  }
  printf("A soma dos divisores do número %d é: %d", numero, soma);
  return 0;
}
