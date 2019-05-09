#include <stdio.h>

int main(){
  int i=0,n,count=0;
  scanf("%d",&n);
  int v[n];
  v[i]=0;
  i++;
  v[i]=1;
  i++;
  while(count<n){
    v[i]=v[i-1]+v[i-2];
    i++;
    count++;
  }
  for(i=0;i<n;i++){
    if(i==n-1)
      printf("%d\n",v[i]);
    else
      printf("%d ",v[i]);

    }
  return 0;
}
