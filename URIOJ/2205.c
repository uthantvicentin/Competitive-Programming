#include <stdio.h>

int main(){
  int x0,y0,x1,y1,v1,r0,r1;
  int soma = 0;
  while(scanf("%d %d %d %d %d %d %d",&x0,&y0,&x1,&y1,&v1,&r0,&r1)!=EOF){
    soma = x0+r0+r1;
    if((soma >= x1) && (soma <= x1+v1))
      printf("Y\n");
    else
      printf("N\n");
  }
  return 0;
}
