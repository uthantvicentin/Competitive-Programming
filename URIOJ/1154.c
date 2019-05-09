#include <stdio.h>

int main(){
  int n,soma=0,count=0;

  while(1){
    scanf("%d",&n);
    if(n<0)
      break;
    soma+=n;
    count++;
  }
    printf("%.2f\n",(float)soma/count);
  return 0;
}
