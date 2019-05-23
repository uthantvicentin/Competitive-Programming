#include <stdio.h>
#include <string.h>
int main(){
  int n;
  char c[14];
  while(scanf("%d",&n)!=EOF){
    strcpy(c,"vai ter copa!");
    if(n>0)
    strcpy(c,"vai ter duas!");
  printf("%s\n",c);
  }
  return 0;
}
