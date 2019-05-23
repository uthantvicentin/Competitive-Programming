#include <stdio.h>

int main(){
  int n,mat,a;
  double nota,maior=0;
  scanf("%d",&n);
  while(n>0){
    scanf("%d %lf",&mat,&nota);
    if(nota>maior){
      maior=nota;
      a=mat;
  }
    n--;
  }
  if(maior<8)
    printf("Minimum note not reached\n");
  else
    printf("%d\n",a);
  return 0;
}
