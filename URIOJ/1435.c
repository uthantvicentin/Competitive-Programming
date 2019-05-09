#include <stdio.h>

int main(){
  int i,o,j,u,n,q=0,p=0,k=1,y;
  while(1){
    scanf("%d",&n);
    if(n==0)
      break;
    int m[n][n];
    o=n;
    if(n%2==0)
      y=n/2;
    else
      y=n/2+1;
    k=1;p=0;q=0;
    for(u=1;u<=y;u++){
      for(i=p;i<o;i++){
        for(j=q;j<o;j++)
          m[i][j]=k;
      }
      k++;
      p++;
      q++;
      o--;
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
