#include <stdio.h>

int main(){
  double x,y;
  int i;
  scanf("%lf",&x);
  y=x*2;
  for(i=0;i<100;i++){
    y=(double)y/2;
    printf("N[%d] = %.4lf\n",i,y);
}
  return 0;
}
