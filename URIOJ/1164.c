#include <stdio.h>

int main(){
  int k,x,n,soma,i;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    soma=0;
    scanf("%d",&x);
      for(k=x-1;k>=1;k--)
        if(x%k==0)
          soma+=k;
        if(soma==x)
          printf("%d eh perfeito\n",x);
        else
          printf("%d nao eh perfeito\n",x);
    }

  return 0;
}
