#include <stdio.h>
#include <string.h>
int main(){
  char a[150];
  int count=0,k,i;
  scanf("%s",a);
  k=strlen(a);
  for(i=0;i<k;i++){
    if(a[i]=='1')
      count++;
}
  if(count%2==0)
    a[k]='0';
  else
    a[k]='1';
    k++;
    a[k]='\0';
    k++;
    printf("%s\n",a);
  return 0;
}
