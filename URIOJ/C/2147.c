#include <stdio.h>
#include <string.h>

int main(){
  char g[20000];
  int a,n;
  double r;
  scanf("%d",&n);
  while(n>0){
  scanf("%s",g);
  a=strlen(g);
  r=(double)a/100;
  printf("%.2lf\n",r);
  n--;
}
  return 0;
}
