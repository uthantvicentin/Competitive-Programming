#include <stdio.h>

int main(){
  int p,j1,j2,r,a,soma;
  scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
  soma=j1+j2;
  if(((soma%2==0)&&(p==1)&&(r==0))||((r==1)&&(a==0)))
    printf("Jogador 1 ganha!\n");
  else if(((soma%2==1)&&(p==0)&&(r==0))||((r==1)&&(a==0)))
      printf("Jogador 1 ganha!\n");
  else
    printf("Jogador 2 ganha!\n");

  return 0;
}
