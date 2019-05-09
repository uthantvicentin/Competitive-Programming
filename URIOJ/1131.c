#include <stdio.h>

int main(){
  int x,y,count=0,ok,vitoriainter=0,vitoriagremio=0,empate=0;
  while(1){
    scanf("%d %d",&x,&y);
    count++;
    if(x==y)
      empate++;
    if(x>y)
      vitoriainter++;
    if(y>x)
      vitoriagremio++;
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&ok);
    if(ok==2)
      break;
    if(ok==1)
      continue;
    }
  printf("%d grenais\n",count);
  printf("Inter:%d\n",vitoriainter);
  printf("Gremio:%d\n",vitoriagremio);
  printf("Empates:%d\n",empate);
  if(vitoriainter>vitoriagremio)
    printf("Inter venceu mais\n");
  if(vitoriagremio>vitoriainter)
    printf("Gremio venceu mais\n");
  if(vitoriainter==vitoriagremio)
    printf("Nao houve vencedor\n");
  return 0;
}
