#include <stdio.h>

int main(){
  double preco,soma=0;
  int a,b,n;
  scanf("%d",&n);
  while(n>0){
    scanf("%d %d",&a,&b);
    if(a == 1001)
      soma+=b*1.50;
    else if(a == 1002)
      soma+=b*2.50;
    else if(a == 1003)
      soma+=b*3.50;
    else if(a == 1004)
      soma+=b*4.50;
    else
      soma+=b*5.50;
    n--;
  }
  printf("%.2lf\n",soma);
  return 0;
}
