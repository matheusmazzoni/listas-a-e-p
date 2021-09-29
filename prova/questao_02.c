#include <stdio.h>

int main(){
  int menu = 1;

  while(menu){
    int opcao, num_parcelas, qtd;
    float valor, parcela, total;

    printf ("=========================\n");
    printf ("1- Pagamento a vista\n");
    printf ("2- Pagamento a prazo\n");
    printf ("3- Sair\n");
    printf ("=========================\n");
    printf (">");
    scanf("%d", &opcao);
    printf("\e[1;1H\e[2J");
    printf ("=========================\n");

    switch (opcao)
    {
      case 1 :
        printf ("=== Pagamento a vista ===\n");
        printf ("=========================\n");
        printf ("Valor Unitario: ");
        scanf("%f", &valor);
        printf ("Quantidade: ");
        scanf("%d", &qtd);

        // 0.9 = 90/100, ou seja, 90%
        total = (valor*qtd)*0.9;

        printf("Total a pagar: %.2f\n", total);

        break;
      
      case 2 :
        printf ("=== Pagamento a prazo ===\n");
        printf ("=========================\n");
        printf ("Valor Unitario: ");
        scanf("%f", &valor);
        printf ("Quantidade: ");
        scanf("%d", &qtd);
        do{
          printf ("Numero de parcelas: ");
          scanf("%d", &num_parcelas);
        } while(num_parcelas>6);

        total = valor*qtd;
        parcela = total/num_parcelas;

        printf("Valor total a pagar: %.2f\n", total);
        printf("Valor de cada parcela: %.2f\n", parcela);

        break;
      
      case 3 :
        printf ("Bye!!\n");
        printf ("=========================\n");
        menu = 0;
        break;
      
      default :
        printf ("Valor invalido! Digite novamente um valor valido\n");
    }
  }
  return 0;
}
