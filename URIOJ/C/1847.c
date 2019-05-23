#include <stdio.h>
#include <string.h>
int main(){
  int a,b,c;
  char r[3];
  scanf("%d %d %d",&a,&b,&c);

  if((a>b)&&(c>=b))
    strcpy(r,":)");
  if((a<b)&&(c<=b))
    strcpy(r,":(");
  if(((a<b)&&(b<c))&&((c-b)<(b-a)))
    strcpy(r,":(");
  if(((a<b)&&(b<c))&&((c-b)>=(b-a)))
    strcpy(r,":)");
  if(((a>b)&&(b>c))&&((b-c)<(a-b)))
    strcpy(r,":)");
  if(((a>b)&&(b>c))&&((b-c)>=(a-b)))
    strcpy(r,":(");
  if((a==b)&&(b<c))
    strcpy(r,":)");
  if((a==b)&&(b>=c))
    strcpy(r,":(");


  printf("%s\n",r);
  return 0;
}
