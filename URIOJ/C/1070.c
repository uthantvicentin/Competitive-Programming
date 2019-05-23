#include <stdio.h>

int main(){
  int n,count=0;
  scanf("%d",&n);
  while(count<6){
    if(n%2==1){
      printf("%d\n",n);
      count++;
    }
    n++;
  }
  return 0;
}
