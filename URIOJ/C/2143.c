#include <stdio.h>

int main(){
  int n,a,i,aux;

  while(scanf("%d",&n) && n){
    for(i=1;i<=n;i++){
      scanf("%d",&a);
      if(a%2)
        printf("%d\n",a*2-1);
        else
        printf("%d\n",a*2-2);
    }
  }
  return 0;
}
