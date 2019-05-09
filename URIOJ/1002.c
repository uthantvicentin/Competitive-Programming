#include <stdio.h>

int main(){
  double area, n=3.14159, raio;
  scanf("%lf",&raio);
  raio=n*(raio*raio);
  printf("A=%0.4lf\n",raio);
  return 0;
}