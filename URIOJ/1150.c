#include <stdio.h>

int main(){
  int x,z,count=0,i,soma=0;
  scanf("%d %d",&x,&z);
  while(z<=x)
    scanf("%d",&z);
  i=x;
  while(soma<z){
    soma+=i;
    i++;
    count++;
  }
  printf("%d\n",count);
  return 0;
}
