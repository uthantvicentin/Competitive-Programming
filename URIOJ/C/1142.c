#include <stdio.h>

int main(){
  int n,i,linha=0,count=0,k=1;
  scanf("%d",&n);
  for(i=1;linha<n;i++){
  if((i%4==0)){
      printf("PUM\n");
      linha++;
    }
  else
    printf("%d ",i);
}
  return 0;
}
