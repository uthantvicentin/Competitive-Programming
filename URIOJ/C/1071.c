#include <stdio.h>
#include <stdlib.h>
int main(){
  int a,b,i,soma=0;
  scanf("%d %d",&a,&b);
  if(a>b){
    a--;
    while (a>b) {
     if(a%2==1||(a%2==-1)){
        soma+=a;
      }
      a--;
  }
}
  else if(b<a){
  for(i=b;i<=a;i++)
    if(i%2==1){
      soma+=i;
      if(i<0)
      soma-=i;
    else
      soma+=i;
    }
    }
  else
    soma=0;
    printf("%d\n",soma);
  return 0;
}
