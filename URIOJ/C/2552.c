#include <stdio.h>

int main(){
  int a,b,i,j,c[100][100];
  while(scanf("%d %d",&a,&b) != EOF){
    for(i = 0 ; i < a ; i++)
      for(j = 0 ; j < b ; j++)
        scanf("%d",&c[i][j]);
    for(i = 0 ; i < a ; i++)
      for(j = 0 ; j < b ; j++){
        if(c[i][j]==1)
          c[i][j] = 9;
        }
        for(i = 0 ; i < a ; i++){
          for(j = 0 ; j < b ; j++)
          printf("%d",c[i][j]);
          printf("\n");
        }
  }


  return 0;
}
