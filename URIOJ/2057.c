#include <stdio.h>
#include <stdlib.h>
int main(){
  int a,b,c,fuso;
  scanf("%d %d %d",&a,&b,&c);
  fuso=a+b+c;
  if(fuso>=23)
    fuso-=24;
  else if(fuso<0)
    fuso+=24;
  printf("%d\n",fuso);

  return 0;
}
