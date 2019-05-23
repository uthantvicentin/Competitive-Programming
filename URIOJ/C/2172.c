#include <stdio.h>

int main(){
  long long int a,b,ex;
  while(1){
    scanf("%llu",&b);
    scanf("%llu",&a);
    if((a==0)&&(b==0))
      break;
    ex=a*b;
    printf("%llu\n",ex);
  }
  return 0;
}
