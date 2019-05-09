#include <stdio.h>

int main(){
  int a[2],b[2],c[2],soma=0;
  scanf("%d %d %d",&a[0],&b[0],&c[0]);
  scanf("%d %d %d",&a[1],&b[1],&c[1]);

  if(a[1]>a[0])
    soma+=a[1]-a[0];
  if(b[1]>b[0])
    soma+=b[1]-b[0];
  if(c[1]>c[0])
    soma+=c[1]-c[0];

  printf("%d\n",soma);
  return 0;
}
