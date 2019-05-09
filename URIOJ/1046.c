#include <stdio.h>

int main(){
  int a,b,horas=0;
  scanf("%d %d",&a,&b);

  if(a>b){
  while(a!=24){
    horas++;
    a++;
  }
  horas=horas+b;
  }
  else if(b>a)
    horas=b-a;
  else
    horas=24;
  printf("O JOGO DUROU %d HORA(S)\n",horas);

  return 0;
}
