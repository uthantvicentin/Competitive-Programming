#include <stdio.h>

int main(){
  int i,n,posicao=-1;
  scanf("%d",&n);
  int x[n+1];
  for(i=1;i<=n;i++)
    scanf("%d",&x[i]);
  for(i=2;i<=n;i++){
    if(x[i-1]>x[i]){
      posicao=i;
      break;
    }
  }
    if(posicao==-1)
      printf("0\n");
    else
      printf("%d\n",posicao);
  return 0;
}
