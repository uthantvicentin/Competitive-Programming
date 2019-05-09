#include <stdio.h>

int main(){
  double a,aumento;
  int p;
  scanf("%lf",&a);

  if((a>=0)&&(a<=400)){
    aumento=a*0.15;
    a+=aumento;
    p=15;
  }
  else if(a<=800){
    aumento=a*0.12;
    a+=aumento;
    p=12;
  }
  else if(a<=1200){
    aumento=a*0.10;
    a+=aumento;
    p=10;
  }
  else if(a<=2000){
    aumento=a*0.07;
    a+=aumento;
    p=7;
  }
  else{
    aumento=a*0.04;
    a+=aumento;
    p=4;
  }

  printf("Novo salario: %.2lf\n",a);
  printf("Reajuste ganho: %.2lf\n",aumento);
  printf("Em percentual: %d %%\n",p);

  return 0;
}
