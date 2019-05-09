#include <stdio.h>

int main(){
  int dias,ano=0,mes=0;
  scanf("%d",&dias);
  do{
  if(dias>=365){
      ano++;
      dias=dias-365;
    }
  if(dias >= 30){
    mes++;
    dias=dias-30;
}
}while(dias>30);

  printf("%d ano(s)\n",ano);
  printf("%d mes(es)\n",mes);
  printf("%d dia(s)\n",dias);
return 0;
}
