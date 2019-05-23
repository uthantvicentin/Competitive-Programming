#include <stdio.h>
int main(){
  int num,hora;
  float vhora;
  scanf("%d %d %f",&num,&hora,&vhora);
  printf("NUMBER = %d\nSALARY = U$ %.2f\n",num,vhora*hora);

  return 0;
}
