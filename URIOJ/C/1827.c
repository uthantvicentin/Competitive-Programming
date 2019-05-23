#include <stdio.h>

int main(){
  int i,j,meio,n,o,k,y,linha;
  while(scanf("%d",&n)!=EOF){
    int m[n][n];
    linha=n/3;
    meio=(n-1)/2;
    k=0;
    y=n-1;
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
         if(i==j)
             m[i][j]=2;
          else
           m[i][j]=0;
      }
  }
  while(k<n){
    m[k][y]=3;
    k++;
    y--;
  }
  k=linha;
  y=linha;
    while(k<n-linha){
      y=linha;
    while(y<n-linha){
      m[k][y]=1;
      y++;
    }
    k++;
  }


    m[meio][meio]=4;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
      printf("%d",m[i][j]);
    printf("\n");
  }
  printf("\n");
}

  return 0;
}
