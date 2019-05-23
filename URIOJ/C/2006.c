#include <stdio.h>

int main(){
  int i,T,A[5],count=0;
  scanf("%d",&T);
  for(i=0;i<5;i++){
    scanf("%d",&A[i]);
    if(A[i]==T)
      count++;
  }
  printf("%d\n",count);
  return 0;
}
