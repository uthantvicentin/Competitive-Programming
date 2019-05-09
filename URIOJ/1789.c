#include <stdio.h>

int main(){
  int L,V,i,maior;
  while(scanf("%d",&L)!=EOF){
    maior=0;
    for(i=1;i<=L;i++){
      scanf("%d",&V);
    if(V>maior)
        maior=V;
    }
    if(maior<10)
      printf("1\n");
      else if(maior<20)
        printf("2\n");
        else
          printf("3\n");
  }

  return 0;
}
