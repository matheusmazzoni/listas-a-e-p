#include <stdio.h>
int main(){
  int i, z, num;
  float fatorial, resultado=1;
  
  do
  {
    printf ("Digite um numero inteiro e positivo: ");
    scanf("%d", &num);
  }
  while(num<0);

  for (i=1; i<=num; i++)
  {
    fatorial=1;
    for(z=i; z>=1; z--){
      fatorial *= z;
    }
    if(i%2!=0){
      resultado -= 1/fatorial;
    }else{
      resultado += 1/fatorial;
    }
  }
  printf("E = %f", resultado);
}