#include <stdio.h>

int main(){
  int n,i,y=0,k=0,s=0,flag=1;
  scanf("%d",&n);
  int x[n];
  scanf("%d",&x[0]);
  scanf("%d",&x[1]);
  if(x[0]==x[1]){
    flag=0;
  }
  for(i=2;i<n;i++){
    scanf("%d",&x[i]);
    while(s!=EOF){
      if(x[0]<=x[1])
        k=0;
      else
        k=1;
        s--;
    }
    if(i%2==k){
        if(x[i-1]<=x[i])
          flag=0;
    }
    else{
        if(x[i-1]>=x[i])
          flag=0;
      }
  }
  printf("%d\n",flag);
  return 0;
}
