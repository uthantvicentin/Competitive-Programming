#include <stdio.h>

int main(){
  int count=0,a,n,i,soma=0;;
  scanf("%d %d",&a,&n);
  while(n<=0)
    scanf("%d",&n);
  i=a;
  while(count<n){
    soma+=i;
    i++;
    count++;
  }
  printf("%d\n",soma);
  return 0;
}
