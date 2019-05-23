#include <stdio.h>

int main(){
  int i=1,j=7,aux,count=1;
  aux=j;
  while(i<=9){
    printf("I=%d J=%d\n",i,j);
    j--;
    if(count>2){
      i+=2;
      j=aux+2;
      aux+=2;
      count=0;
    }
    count++;
  }

  return 0;
}
