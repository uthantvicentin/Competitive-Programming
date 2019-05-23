#include <stdio.h>

int main(){
  char nome;
  double valor1,valor2;
  scanf("%s %lf %lf",&nome,&valor1,&valor2);

  printf("TOTAL = R$ %.2lf\n",valor1+valor2*0.15);

  return 0;
}
