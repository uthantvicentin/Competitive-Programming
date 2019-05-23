#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,anos,N,X;
  scanf("%d",&N);
  for(i=0;i<N;i++){
    scanf("%d",&X);
    if(X>=2015){
      anos=abs(2014-X);
      printf("%d A.C.\n",anos);
    }
    else{
      anos=abs(2015-X);
      printf("%d D.C.\n",anos);
    }
  }
  return 0;
}
