#include <stdio.h>
#include <string.h>
int main(){
  int i,n,qt=0,total=0,rato=0,sapo=0,coelho=0;
  char tipo[2];
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&qt);
    scanf("%s",&tipo);
    if(strcmp(tipo,"C")==0)
        coelho+=qt;
    if(strcmp(tipo,"S")==0)
        sapo+=qt;
    if(strcmp(tipo,"R")==0)
        rato+=qt;

    total+=qt;
  }
  printf("Total: %d cobaias\n",total);
  printf("Total de coelhos: %d\n",coelho);
  printf("Total de ratos: %d\n",rato);
  printf("Total de sapos: %d\n",sapo);
  printf("Percentual de coelhos: %.2f %%\n",(float)coelho*100/total);
  printf("Percentual de ratos: %.2f %%\n",(float)rato*100/total);
  printf("Percentual de sapos: %.2f %%\n",(float)sapo*100/total);
  return 0;
}
