#include <stdio.h>

int main(){
  float x,y=-1,count=0;
  scanf("%f",&x);
  while(1){
    if(((x>=0)&&(x<=10))&&(count==1)){
      printf("media = %.2f\n",(float)(x+y)/2);
      break;
    }
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
