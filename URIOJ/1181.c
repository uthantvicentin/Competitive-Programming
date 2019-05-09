#include <stdio.h>
#include <string.h>
#define tf 12
int main(){
  double M[tf][tf],soma=0,media=0;
  int L,i,j;
  char T[2];
  scanf("%d",&L);
  scanf("%s",&T);
  for(i=0;i<tf;i++)
    for(j=0;j<tf;j++)
      scanf("%lf",&M[i][j]);
  if(strcmp("S",T)==0){
    for(i=0;i<tf;i++)
      soma+=M[L][i];
    printf("%.1lf\n",soma);
    }
  else{
    for(i=0;i<tf;i++)
      soma+=M[L][i];
    media=soma/tf;
    printf("%.1lf\n",media);
    }
  return 0;
}
