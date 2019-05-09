#include <stdio.h>

int main(){
  int n,somats=0,somatb=0,somata=0,somaas=0,somaab=0,somaaa=0,ts,tb,ta,as,ab,aa;
  char nome[100];
  double saque,bloqueio,ataque;
  scanf("%d",&n);
  while(n>0){
    scanf("%s",nome);
    scanf("%d %d %d",&ts,&tb,&ta);
    scanf("%d %d %d",&as,&ab,&aa);
    somats+=ts;
    somatb+=tb;
    somata+=ta;
    somaas+=as;
    somaab+=ab;
    somaaa+=aa;
    n--;
  }
  saque=(double)somaas/somats*100;
  bloqueio=(double)somaab/somatb*100;
  ataque=(double)somaaa/somata*100;

  printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",saque,bloqueio,ataque);

  return 0;
}
