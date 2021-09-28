#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
  int numbers[2], i=1, dividor=0;

  for(int z = 0; z < 2; z++){
    printf("Digite o %dº valor: \n", z+1 );
    scanf("%d",&numbers[z]);
  }
    
  while(numbers[0]>=i && numbers[1]>=i){
    if(numbers[0]%i==0 && numbers[1]%i==0)
      dividor = dividor<i ? i : 1;
    i++;
  }
  printf("MDC(%d,%d) = %d\n",numbers[0], numbers[1], dividor);
  return 0;
}
