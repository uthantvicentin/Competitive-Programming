#include <stdio.h>
#include <string.h>
#define tf 12
int main(){
  double M[tf][tf],soma=0,media=0;
  int i,j,count=0,p=10,q=1;
  char O[2];
  scanf("%s",&O);
  for(i=0;i<tf;i++)
    for(j=0;j<tf;j++)
      scanf("%lf",&M[i][j]);

  if(strcmp("S",O)==0){
    for(i=0; i<=4;i++){
      for(j=q; j<=p;j++)
        soma+=M[i][j];
        p--;
        q++;
      }
      printf("%.1lf\n",soma);
  }
  else{
    for(i=0; i<=4;i++){
      for(j=q; j<=p;j++)
        soma+=M[i][j];
        p--;
        q++;
      }
    media=soma/30;
    printf("%.1lf\n",media);
    }
  return 0;
}
