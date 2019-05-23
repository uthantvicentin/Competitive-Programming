#include <stdio.h>

int main(){
  int i,a=0,g=0,d=0;
  do{
    scanf("%d",&i);
    switch(i){
      case 1:
      a++;
      break;
      case 2:
      g++;
      break;
      case 3:
      d++;
      break;
      case 4:
      break;
    }

  }while(i!=4);
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n",a);
  printf("Gasolina: %d\n",g);
  printf("Diesel: %d\n",d);
  return 0;
}
