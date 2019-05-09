#include <stdio.h>
#include <math.h>

int main(){
  double i,f;
  scanf("%lf",&i);
  f=((pow(((1+sqrt(5))/2),i))-(pow(((1-sqrt(5))/2),i)))/sqrt(5);
  printf("%.1lf\n",f);
  return 0;
}
