#include <stdio.h>

int main(){
  int aux,a,b,c,menor,medio,maior;
  scanf("%d %d %d",&a,&b,&c);
  if((b < a)&&(b < c))
      menor=b;
  else if((a < b)&&(a < c))
      menor=a;
  else
      menor=c;
  if((b > a)&&(b > c))
      maior=b;
  else if((a > b)&&(a > c))
      maior=a;
  else
      maior=c;
  if(((menor == a)||(menor==b))&&((maior==a)||(maior==b)))
        medio=c;
  else if(((menor == c)||(menor==b))&&((maior==c)||(maior==b)))
        medio=a;
  else
        medio=b;
  printf("%d\n",menor);
  printf("%d\n",medio);
  printf("%d\n",maior);
  printf("\n");
  printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",c);
  return 0;
}
