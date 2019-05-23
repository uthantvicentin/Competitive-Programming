#include <stdio.h>

int main(){
  int codigo1,qt1,codigo2,qt2;
  float valor1,valor2;
  scanf("%d %d %f",&codigo1,&qt1,&valor1);
  scanf("%d %d %f",&codigo2,&qt2,&valor2);
  printf("VALOR A PAGAR: R$ %.2f\n",qt1*valor1+qt2*valor2);
  return 0;
}
