#include <stdio.h>

int main(){
  int numero=0, soma=0, i;

  printf("Digite o um numero inteiro:");
  scanf("%d",&numero);
    
 
  for (i=1; i<numero; i++){
    if(numero%i==0)
      soma += i;
  }
  printf("A soma dos divisores do número %d é: %d", numero, soma);
  return 0;
}
