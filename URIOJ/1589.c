#include <stdio.h>

int main(){
  int r1,r2,n,diametror1,diametror2,i,soma;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d %d",&r1,&r2);
    soma=r1+r2;
    printf("%d\n",soma);
  }

  return 0;
}
