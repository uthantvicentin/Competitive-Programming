#include <stdio.h>

int main(){
  double x[6],soma=0,media;
  int i,count=0;
  for(i=0;i<6;i++)
    scanf("%lf",&x[i]);
  for(i=0;i<6;i++)
    if(x[i]>0){
      soma+=x[i];
      count++;
}
  media=soma/count;
  printf("%d valores positivos\n",count);
  printf("%.1lf\n",media);

  return 0;
}
