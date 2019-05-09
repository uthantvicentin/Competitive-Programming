#include <stdio.h>
#include <string.h>

int main(){
  int a,b,i,soma=0;
  char x[50];
  scanf("%d",&a);
  while(a > 0){
    soma = 0;
    for(i=0;i<a;i++){
      scanf("%d %[^\n]s",&b,x);
      if(strcmp(x,"suco de laranja")==0)
        soma += b*120;
      else if(strcmp(x,"morango fresco")==0)
        soma += b*85;
      else if(strcmp(x,"mamao")==0)
        soma += b*85;
      else if(strcmp(x,"goiaba vermelha")==0)
        soma += b*70;
      else if(strcmp(x,"manga")==0)
        soma += b*56;
      else if(strcmp(x,"laranja")==0)
        soma += b*50;
      else
        soma += b*34;
    }
    if(soma > 130)
      printf("Menos %d mg\n",soma-130);
    else if(soma < 110)
      printf("Mais %d mg\n",110-soma);
    else
      printf("%d mg\n",soma);
    scanf("%d",&a);
  }

  return 0;
}
