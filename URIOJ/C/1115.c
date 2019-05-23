#include <stdio.h>

int main(){
  int x,y;
  scanf("%d %d",&x,&y);
  while(1){
    if((x==0)||(y==0))
      break;
    if((x>0)&&(y>0))
      printf("primeiro\n");
    else if((x>0)&&(y<0))
      printf("quarto\n");
    else if((x<0)&&(y<0))
      printf("terceiro\n");
    else
      printf("segundo\n");
    scanf("%d %d",&x,&y);
  }

  return 0;
}
