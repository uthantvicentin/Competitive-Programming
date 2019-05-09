#include <stdio.h>

int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(((a-b)==0)||((a-c)==0)||((b-c)==0))
    printf("S\n");
  else if(((a+b)==c)||((b+c)==a)||((a-c)==b)||(b-c)==a)
    printf("S\n");
  else
    printf("N\n");

  return 0;
}
