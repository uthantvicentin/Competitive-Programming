#include <stdio.h>

int main(){
  int m,n,posicaoi=0,posicaoj=0,i,j;
  scanf("%d %d",&n,&m);
  int mat[n][m];
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&mat[i][j]);
  for(i=1;i<n-1;i++){
    for(j=1;j<m-1;j++){
        if(mat[i][j]==42)
          if(mat[i-1][j-1]==7 && mat[i-1][j]==7 && mat[i-1][j+1]==7)
            if(mat[i][j-1]==7 && mat[i][j+1]==7)
              if(mat[i+1][j-1]==7 && mat[i+1][j]==7 && mat[i+1][j+1]==7){
          posicaoi=i+1;
          posicaoj=j+1;
        }
        }
      }
  printf("%d %d\n",posicaoi,posicaoj);
  return 0;
}
