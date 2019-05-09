#include <stdio.h>

int main(){
  int x,soma,count;
  while(1){
    scanf("%d",&x);
    if(x==0)
      break;
    soma=0;
    count=0;
    if(x%2==0){
      while(count<=4){
      soma+=x;
      x+=2;
      count++;
    }
  }
    else{
      x++;
      while(count<=4){
      soma+=x;
      x+=2;
      count++;
    }
  }
  printf("%d\n",soma);
}
  return 0;
}
