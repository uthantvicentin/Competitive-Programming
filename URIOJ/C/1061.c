#include <stdio.h>

int main(){
  int diai,a,b,c,diaf,d,e,f;
  int diafinal,horafinal,minutofinal,segundofinal;
  scanf("Dia %d", &diai);
  scanf("%d : %d : %d\n", &a, &b, &c);
  scanf("Dia %d", &diaf);
  scanf("%d : %d : %d", &d, &e, &f);
  diafinal=diaf-diai;
  horafinal=d-a;
  minutofinal=e-b;
  segundofinal=f-c;
  if(segundofinal<0){
    segundofinal+=60;
    minutofinal--;
  }
  if(minutofinal<0){
    minutofinal+=60;
    horafinal--;
  }
  if(horafinal<0){
    horafinal+=24;
    diafinal--;
  }
  printf("%d dia(s)\n",diafinal);
  printf("%d hora(s)\n",horafinal);
  printf("%d minuto(s)\n",minutofinal);
  printf("%d segundo(s)\n",segundofinal);
  return 0;
}
