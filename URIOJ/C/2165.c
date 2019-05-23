#include <stdio.h>
#include <string.h>

int main(){
  char t[1000];
  int a;
  gets(t);
  a=strlen(t);
  if(a<=140)
    printf("TWEET\n");
  else
    printf("MUTE\n");
  return 0;
}
