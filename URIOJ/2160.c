#include <stdio.h>
#include <string.h>
int main(){
  char t[1000];
  int a;
  gets(t);
  a=strlen(t);
  if(a<=80)
    printf("YES\n");
  else
    printf("NO\n");
  return 0;
}
