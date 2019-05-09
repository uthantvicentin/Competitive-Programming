#include <stdio.h>

int main(){
  int i,k=0,j,n,x[214748],tl=0,count;
  while(scanf("%d",&n)!=EOF){
    k++;
    tl=0;
    if(n==0){
      x[0]=0;
      tl++;
    }
      else if(n==1){
        x[0]=0;
        x[1]=1;
        tl=2;
      }
      else{
        x[0]=0;
        tl++;
        for(i=1;i<=n;i++){
          count=0;
          while(count<i){
            x[tl]=i;
            count++;
            tl++;
          }
        }
      }
      if(tl==1)
        printf("Caso %d: %d numero\n",k,tl);
      else
        printf("Caso %d: %d numeros\n",k,tl);
      for(i=0;i<tl;i++){
        if(i<tl-1)
          printf("%d ",x[i]);
        else
          printf("%d\n",x[i]);
      }
        printf("\n");
    }

  return 0;
}
