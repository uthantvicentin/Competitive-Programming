#include <stdio.h>
int main(){
  char acao[10];
  int n,i;
  scanf("%d %d",&i,&n);
  while(n>0){
    scanf("%s",acao);
    if(acao[0]=='f'){
      i--;
      i+=2;
    }
    else
      i--;
    n--;
  }
  printf("%d\n",i);


  return 0;
}
