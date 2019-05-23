#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,flag;
  long long int P,N;
  scanf("%lld %lld",&P,&N);
  long long int X[N];
  for(i=0;i<N;i++)
    scanf("%lld",&X[i]);
  flag = 1;
  for(i=1;i<N;i++)
    if(abs(X[i]-X[i-1])>P){
      flag = 0;
      break;
  }
  if(flag==1)
    printf("YOU WIN\n");
  else
    printf("GAME OVER\n");
  return 0;
}
