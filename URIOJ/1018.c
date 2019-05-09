#include <stdio.h>

int main(){
  int valor,cem=0,cinquenta=0,vinte=0,dez=0,cinco=0,dois=0,um=0;
  scanf("%d",&valor);
  int aux=valor;
  do{
    if(aux>=100){
      cem++;
      aux=aux-100;
    }
    if((aux<100) && (aux>=50)){
      cinquenta++;
      aux=aux-50;
    }
    if((aux<50) && (aux>=20)){
      vinte++;
      aux=aux-20;
    }
    if((aux<20) && (aux>=10)){
      dez++;
      aux=aux-10;
    }
    if((aux<10) && (aux>=5)){
      cinco++;
      aux=aux-5;
    }
    if((aux<5) && (aux>=2)){
      dois++;
      aux=aux-2;
    }
    if((aux<2) && (aux>=1)){
      um++;
      aux=aux-1;
    }
  }while(aux!=0);
  printf("%d\n",valor);
  printf("%d nota(s) de R$ 100,00\n",cem);
  printf("%d nota(s) de R$ 50,00\n",cinquenta);
  printf("%d nota(s) de R$ 20,00\n",vinte);
  printf("%d nota(s) de R$ 10,00\n",dez);
  printf("%d nota(s) de R$ 5,00\n",cinco);
  printf("%d nota(s) de R$ 2,00\n",dois);
  printf("%d nota(s) de R$ 1,00\n",um);

  return 0;
}
