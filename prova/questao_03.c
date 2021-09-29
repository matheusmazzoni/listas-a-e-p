#include <stdio.h>

int main(){
  int dia=0, mes=0, ano=0, dias_fevereiro=28, dias_passados=0;
  
  do
  {
    printf ("Digite um Dia(1 a 31): ");
    scanf("%d", &dia);
  }
  while(dia>31);

  do
  {
    printf ("Digite um Mes(1 a 12): ");
    scanf("%d", &mes);
  } while(mes>12);

  do
  {
    printf ("Digite um Ano(1 a n): ");
    scanf("%d", &ano);
  } while(ano<1);
  
  if (ano%4==0 && ano%100!=0)
    dias_fevereiro = 29;

  if (mes==2)
  {
    if(dia>dias_fevereiro)
    {
      printf("Dia invalido! Entre com uma nova data valida!");
      return 1;
    }
  }

      
  switch(mes){
    case 1:
        dias_passados=dia;
      break;
    case 2:
        dias_passados=31+dia;
        break;
    case 3:
        dias_passados=31+dias_fevereiro+dia;
        break;
    case 4:
        dias_passados=62+dias_fevereiro+dia;
        break;
    case 5:
        dias_passados=92+dias_fevereiro+dia;
        break;
    case 6:
        dias_passados=123+dias_fevereiro+dia;
        break;
    case 7:
        dias_passados=153+dias_fevereiro+dia;
        break;
    case 8:
        dias_passados=184+dias_fevereiro+dia;
        break;
    case 9:
        dias_passados=215+dias_fevereiro+dia;
        break;
    case 10:
        dias_passados=245+dias_fevereiro+dia;
        break;
    case 11:
        dias_passados=276+dias_fevereiro+dia;
        break;
    case 12:
        dias_passados=306+dias_fevereiro+dia;
        break;   
  }

  printf("%d dias do inicio do ano ate a data informada.\n", dias_passados);
  return 0;
}
