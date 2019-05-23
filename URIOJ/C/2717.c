#include <stdio.h>

int main(){
  int n, a,b;
  scanf("%d",&n);
  scanf("%d %d",&a,&b);
  if((a+b)<=n)
    printf("Farei hoje!\n");
    else
      printf("Deixa para amanha!\n");

  return 0;
}
