#include <stdio.h>
#include <stdlib.h>
int main(){
  int a,b,c;
  int maiorab,maior;
  scanf("%d %d %d",&a,&b,&c);
  maiorab=(a+b+abs(a-b))/2;
  maior=(maiorab+c+abs(maiorab-c))/2;
  printf("%d eh o maior\n",maior);
  return 0;
}
