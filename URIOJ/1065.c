#include <stdio.h>

int main(){
  int a,count=0,i=0;
  while(i<5){
    scanf("%d",&a);
    if(a%2==0)
      count++;
    i++;
  }
  printf("%d valores pares\n",count);
  return 0;
}
