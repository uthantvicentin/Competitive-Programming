#include <stdio.h>

int main(){
  int soma,x,y,n,i,count;
  scanf("%d",&n);
  for(count=1;count<=n;count++){
    scanf("%d %d",&x,&y);
    if(x%2==1){
        soma=0;
        for(i=1; i<=y; i++){
            soma+=x;
            x+=2;
        }
        printf("%d\n", soma);
    }
    else{
      x++;
      soma=0;
      for(i=1; i<=y; i++){
          soma+=x;
          x+=2;
      }
      printf("%d\n", soma);
    }
  }
  return 0;
}
