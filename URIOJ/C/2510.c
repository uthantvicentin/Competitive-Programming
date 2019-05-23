#include <stdio.h>
#include <string.h>
int main(){
  char nome[100];
  int n;
  scanf("%d",&n);
  while(n--){
    scanf("%s",nome);
    if(strcmp(nome,"Batmain")==0)
      printf("N\n");
    else
      printf("Y\n");
  }
  return 0;
}
