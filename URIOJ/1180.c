#include <stdio.h>

int main(){
  int n,menor=2147483647,posicao,i;
  scanf("%d",&n);
  int x[n];
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
    if(x[i]<menor){
      menor=x[i];
      posicao=i;
    }
  }
  printf("Menor valor: %d\n",menor);
  printf("Posicao: %d\n",posicao);
  return 0;
}
