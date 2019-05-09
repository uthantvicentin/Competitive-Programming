#include <stdio.h>

int main(){
  int numero;
  scanf("%d",&numero);
  int resultado = numero;
  if (numero == 0)
    resultado++;
  while (numero > 1)
   resultado *= --numero;
  printf("%d\n",resultado);
}
