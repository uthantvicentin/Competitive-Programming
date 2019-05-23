#include <stdio.h>
#include <math.h>
int main(){
  double a,b,dif,aumento,resultado;
  scanf("%lf %lf",&a,&b);
  if(a==b)
    resultado = 0;
  else{
    dif=a-b;
    aumento=dif/a;
    resultado=fabs(aumento*100);
  }
  printf("%.2lf%%\n",resultado);

  return 0;
}
