#include <stdio.h>

int main(){
  int i,n,x,count,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    count=0;
    scanf("%d",&x);
      for(k=1;k<=x;k++)
        if(x%k==0)
          count++;
  if(count<=2)
    printf("%d eh primo\n",x);
  else
    printf("%d nao eh primo\n",x);
}
  return 0;
}
