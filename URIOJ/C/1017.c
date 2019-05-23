#include<stdio.h>

int main(){
  float tempo,velocidade,kml=12;
  scanf("%f %f",&tempo,&velocidade);
  printf("%.3f\n",(velocidade*tempo)/kml);
return 0;
}
