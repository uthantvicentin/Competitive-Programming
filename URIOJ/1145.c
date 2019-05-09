#include <stdio.h>

int main(){
  int i,x,y,count=0;
  scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++){
      count++;
      if(count==x){
        printf("%d\n",i);
        count=0;
      }
      else
      printf("%d ",i);
        }
  return 0;
}
