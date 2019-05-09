#include <stdio.h>
#include <math.h>

int main(){
  double a,b,c,menor,medio,maior;
  scanf("%lf %lf %lf",&a,&b,&c);
  if((a>b)&&(a>c))
    maior=a;
  else if((b>a)&&(b>c))
    maior=b;
  else
    maior=c;
  if(((a<b)&&(a<c))||(a==b))
      menor=a;
  else if(((b<a)&&(b<c))||(b==a))
      menor=b;
  else
      menor=c;
  if(((menor == a)||(menor==b))&&((maior==a)||(maior==b)))
      medio=c;
  else if(((menor == c)||(menor==b))&&((maior==c)||(maior==b)))
      medio=a;
  else
      medio=b;

  a = maior;
  b = medio;
  c = menor;
  if(a>=(b+c)){
    printf("NAO FORMA TRIANGULO\n");
    return 0;
  }
  if(pow(a,2)==(pow(b,2)+pow(c,2)))
    printf("TRIANGULO RETANGULO\n");
  else if((pow(a,2))>(pow(b,2)+pow(c,2)))
    printf("TRIANGULO OBTUSANGULO\n");
  else if((pow(a,2))<(pow(b,2)+pow(c,2)))
    printf("TRIANGULO ACUTANGULO\n");
  if((a==b)&&(a==c))
    printf("TRIANGULO EQUILATERO\n");
  if(((a==b)&&(a!=c))||((b==c)&&(b!=a))||((c==a)&&(c!=b)))
    printf("TRIANGULO ISOSCELES\n");

  return 0;
}
