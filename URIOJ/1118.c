#include <stdio.h>

int main(){
  float x,y=-1,count=0;
  int ok;
  scanf("%f",&x);
  while(1){
    if(((x>=0)&&(x<=10))&&(count==1)){
      printf("media = %.2f\n",(float)(x+y)/2);
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d",&ok);
      while(1){
        if(ok==2)
          break;
        else if(ok==1){
              y=-1;
              scanf("%f",&x);
              count=0;
              break;
            }
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&ok);
      }
      }
      if(ok==2)
        break;
    if((x>=0)&&(x<=10)){
      y=x;
      count++;
    }
    else
      printf("nota invalida\n");
    scanf("%f",&x);
  }


  return 0;
}
