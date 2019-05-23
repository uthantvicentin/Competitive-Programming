#include <stdio.h>
#include <string.h>
int main(){
  char f[20000];
  int n,x;
  strcat(f,"Feliz nat");
  scanf("%d",&n);
  x=strlen(f);
  while(n>0){
    f[x]='a';
    x++;
    n--;
  }
  printf("%sl!\n",f);
  return 0;
}
