#include <stdio.h>

int main(){
  int a,countpar=0,countnegativo=0,countpositivo=0,countimpar=0,i=0;
  while(i<5){
    scanf("%d",&a);
    if(a%2==0)
      countpar++;
    else
      countimpar++;
    if(a > 0)
      countpositivo++;
    if(a < 0)
      countnegativo++;
    i++;
  }
  printf("%d valor(es) par(es)\n",countpar);
  printf("%d valor(es) impar(es)\n",countimpar);
  printf("%d valor(es) positivo(s)\n",countpositivo);
  printf("%d valor(es) negativo(s)\n",countnegativo);

  return 0;
}
