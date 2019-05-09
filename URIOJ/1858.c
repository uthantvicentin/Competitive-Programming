#include <stdio.h>

int main(){
  int i,k,l,m,n;
  scanf("%d",&n);
  l=20;
  for(i=0;i<n;i++){
      scanf("%d",&m);
      if(m<l){
        l=m;
        k=i+1;
      }

  }
    printf("%d\n",k);

  return 0;
}
