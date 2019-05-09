#include <stdio.h>
#include <math.h>

int main(){
  double v,d,h,a,r,pi=3.14;
  while(scanf("%lf %lf",&v,&d)!=EOF){
    r=d/2;
    a=pi*pow(r,2);
    h=v/a;
    printf("ALTURA = %.2lf\n",h);
    printf("AREA = %.2lf\n",a);
  }
  return 0;
}
