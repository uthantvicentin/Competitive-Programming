#include <stdio.h>
#include <string.h>
int main(){
  char resposta[50];
  int num;
  scanf("%d",&num);
  switch(num){
    case 61:
        strcpy(resposta,"Brasilia");
    break;
    case 71:
        strcpy(resposta,"Salvador");
    break;
    case 11:
        strcpy(resposta,"Sao Paulo");
    break;
    case 21:
        strcpy(resposta,"Rio de Janeiro");
    break;
    case 32:
        strcpy(resposta,"Juiz de Fora");
    break;
    case 19:
        strcpy(resposta,"Campinas");
    break;
    case 27:
        strcpy(resposta,"Vitoria");
    break;
    case 31:
        strcpy(resposta,"Belo Horizonte");
    break;
    default:
        strcpy(resposta,"DDD nao cadastrado");
    break;
  }
  printf("%s\n",resposta);
  return 0;
}
