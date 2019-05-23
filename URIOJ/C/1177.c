#include <stdio.h>

int main(){
  int n[1000],t,i=0,count=0;
  scanf("%d",&t);
  while(i<1000){
    if(count<t){
      printf("N[%d] = %d\n",i,count);
      count++;
    }
    else{
      count=0;
      printf("N[%d] = %d\n",i,count);
      count++;
    }
      i++;
  }
  return 0;
}
