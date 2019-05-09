#include <stdio.h>

int main(){
  int i,x,y,soma=0;
  scanf("%d %d",&x,&y);
  if(x<y){
  for(i=x;i<=y;i++){
    if(i%13!=0)
      soma+=i;
    }
    }
  else if(y<x){
  for(i=y;i<=x;i++){
    if(i%13!=0)
      soma+=i;
  }
}
  printf("%d\n",soma);

  return 0;
}
