#include <stdio.h>
#include <string.h>
int main(){
  char f[100000];
  int i,n,posicao;
  while(scanf("%s",f) != EOF){
    scanf("%d",&n);
    while(n--){
        scanf("%d",&i);
        printf("%c",f[i-1]);
    }
    printf("\n");
  }
  return 0;
}
