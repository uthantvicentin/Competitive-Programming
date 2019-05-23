#include <stdio.h>

int main(){
  int i,a,b,c,d,count;
  while(scanf("%d %d %d",&a,&b,&c)!= EOF){
    count = 0;
    for(i = 0; i < a ; i++){
    scanf("%d",&d);
      if((d>=b) && (d<=c))
        count++;
    }
    printf("%d\n",count);

  }

  return 0;
}
