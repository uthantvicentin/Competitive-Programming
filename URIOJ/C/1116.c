#include <stdio.h>

int main(){
  int i,n,x,y;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d %d",&x,&y);
    if(y==0)
      printf("divisao impossivel\n");
    else
      printf("%.1f\n",(float)x/y);
  }

  return 0;
}
