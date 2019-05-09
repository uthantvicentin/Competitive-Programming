#include <stdio.h>

int main(){
  int x,y,soma,i;
  scanf("%d %d",&x,&y);
  while(1){
    if((x<1)||(y<1))
      break;
    soma=0;
    if(x<y)
      for(i=x;i<=y;i++){
        printf("%d ",i);
        soma+=i;
      }
    else if(y<x)
    for(i=y;i<=x;i++){
      printf("%d ",i);
      soma+=i;
    }
    else
      soma=x;
    printf("Sum=%d\n",soma);
    scanf("%d %d",&x,&y);
  }


return 0;
}
