#include <stdio.h>

int main(){
  int i,n[10],x;
  scanf("%d",&x);
  for(i=0;i<10;i++){
    n[i]=x;
    x*=2;
  }
  for(i=0;i<10;i++)
    printf("N[%d] = %d\n",i,n[i]);
  return 0;
}
