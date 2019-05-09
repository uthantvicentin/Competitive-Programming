#include <stdio.h>

int main(){
  double v[7],x,maior=0,menor=10,soma=0,r;
  int n,i,posicaomaior,posicaomenor;
  char nome[50];
  scanf("%d",&n);
  while(n--){
    soma=0;
    maior=0;
    menor=10;
    scanf("%s",nome);
    scanf("%lf",&x);
    for(i=0;i<7;i++)
      scanf("%lf",&v[i]);
    for(i=0;i<7;i++){
      if(v[i]>maior){
        maior=v[i];
        posicaomaior=i;
    }
      if(v[i]<menor){
        menor=v[i];
        posicaomenor=i;
      }
    }

    for(i=0;i<7;i++){
      if((i==posicaomaior) && (v[i]==maior))
        continue;
      else if((i==posicaomenor)&& (v[i]==menor))
          continue;
      else
        soma+=v[i];
      }
      r=soma*x;
      printf("%s %.2lf\n",nome,r);
    }

  return 0;
}
