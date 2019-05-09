#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(((abs((a-b))<c)&&((a+c)>c))){
    if((a==b)&&(b==c)){
      printf("Valido-Equilatero\n");
      printf("Retangulo: N\n");
    }
    else if((a==b && b!=c)||( a==c && c!=b )||(c==b && b!=a)){
      printf("Valido-Isoceles\n");
      if((a>b)&&(a>c)){
        if(pow(a,2)==(pow(b,2)+pow(c,2)))
          printf("Retangulo: S\n");
        else
          printf("Retangulo: N\n");
        }
        else if(b>a && b>c){
          if(pow(b,2)==(pow(c,2)+pow(a,2)))
            printf("Retangulo: S\n");
          else
            printf("Retangulo: N\n");
        }
        else if(c>a && c>b){
          if(pow(c,2)==(pow(a,2)+pow(b,2)))
            printf("Retangulo: S\n");
          else
            printf("Retangulo: N\n");
        }
        else
          printf("Retangulo: N\n");
      }
    else if(a!=b && a!=c && c!= b){
      printf("Valido-Escaleno\n");
      if((a>b)&&(a>c)){
        if(pow(a,2)==(pow(b,2)+pow(c,2)))
          printf("Retangulo: S\n");
        else
          printf("Retangulo: N\n");
        }
        else if(b>a && b>c){
          if(pow(b,2)==(pow(c,2)+pow(a,2)))
            printf("Retangulo: S\n");
          else
            printf("Retangulo: N\n");
        }
        else if(c>a && c>b){
          if(pow(c,2)==(pow(a,2)+pow(b,2)))
            printf("Retangulo: S\n");
          else
            printf("Retangulo: N\n");
        }
        else
        printf("Retangulo: N\n");
    }
}
  else
    printf("Invalido\n");

  return 0;
}
