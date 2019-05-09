#include<stdio.h>

int main(){
  float preco,total;
  int codigo,quantidade;
  scanf("%d %d",&codigo,&quantidade);
  if(codigo == 1)
    preco = 4;
  else if(codigo == 2)
    preco = 4.5;
  else if(codigo == 3)
    preco = 5;
  else if(codigo == 4)
    preco = 2;
  else
    preco =1.5;

    total=preco*quantidade;
  printf("Total: R$ %.2f\n",total);

}
