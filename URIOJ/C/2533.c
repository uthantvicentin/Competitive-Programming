#include <stdio.h>

int main(){
  int i,m,n,c,soma,soma_1;
  double r;
  while(scanf("%d",&m)!=EOF){
    soma = 0;
    soma_1 = 0;
    for(i=0;i<m;i++){
      scanf("%d %d",&n,&c);
        soma+=(n*c);
        soma_1+=(c*100);
    }
    r = (double)soma/soma_1;
    printf("%.4lf\n",r);
  }

  return 0;
}
