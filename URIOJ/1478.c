#include <stdio.h>

int main(){
  int i,j,n,y,x=1,k;
  while(1){
  scanf("%d",&n);
  if(n==0)
    break;
  int m[n][n];
  x=1;
  y=1;
  for(i=0;i<n;i++){
    k=x;
    for(j=0;j<n;j++){
      if((k>1)&&(i>j)){
        m[i][j]=k;
        k--;
      }
      else{
        m[i][j]=k;
        k++;
      }
    }
    x++;
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j==0)
        printf("%3d",m[i][j]);
      else
        printf(" %3d",m[i][j]);
}
  printf("\n");
}
printf("\n");
}
  return 0;
}
