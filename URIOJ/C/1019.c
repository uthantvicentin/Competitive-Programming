#include <stdio.h>

int main(){
  int segundos,horas=0,minutos=0;
  scanf("%d",&segundos);
  do{
  if(segundos>=3600){
      horas++;
      segundos=segundos-3600;
    }
  if(segundos >= 60){
    minutos++;
    segundos=segundos-60;
}
}while(segundos>60);

printf("%d:%d:%d\n",horas,minutos,segundos);
return 0;
}
