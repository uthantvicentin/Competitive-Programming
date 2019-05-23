#include <stdio.h>


int main(){
  double n;
  int cem = 0,cinquenta = 0, vinte = 0, dez = 0,cinco = 0,dois = 0;
  int mum = 0 , mcinquenta = 0, mvinteecinco = 0, mdez = 0, mcinco = 0, mzeroum = 0;
  scanf("%lf",&n);
  int num = n*1000;
  while(num > 0){
    if(num >= 100000){
      cem++;
      num -= 100000;
    }
    else if(num >= 50000){
      cinquenta++;
      num -= 50000;
    }
    else if(num >= 20000){
      vinte++;
      num -= 20000;
    }
    else if(num >= 10000){
      dez++;
      num -= 10000;
    }
    else if(num >= 5000){
      cinco++;
      num -= 5000;
    }
    else if(num >= 2000){
      dois++;
      num -= 2000;
    }
    else if(num >= 1000){
      mum++;
      num -= 1000;
    }
    else if(num >= 500){
      mcinquenta++;
      num -= 500;
    }
    else if(num >= 250){
      mvinteecinco++;
      num -= 250;
    }
    else if(num >= 100){
      mdez++;
      num -= 100;
    }
    else if(num >= 50){
      mcinco++;
      num -= 50;
    }
    else if(num >= 10){
      mzeroum++;
      num -= 10;
    }

  }
  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n",cem);
  printf("%d nota(s) de R$ 50.00\n",cinquenta);
  printf("%d nota(s) de R$ 20.00\n",vinte);
  printf("%d nota(s) de R$ 10.00\n",dez);
  printf("%d nota(s) de R$ 5.00\n",cinco);
  printf("%d nota(s) de R$ 2.00\n",dois);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n",mum);
  printf("%d moeda(s) de R$ 0.50\n",mcinquenta);
  printf("%d moeda(s) de R$ 0.25\n",mvinteecinco);
  printf("%d moeda(s) de R$ 0.10\n",mdez);
  printf("%d moeda(s) de R$ 0.05\n",mcinco);
  printf("%d moeda(s) de R$ 0.01\n",mzeroum);

  return 0;
}
