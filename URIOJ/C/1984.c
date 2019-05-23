#include <stdio.h>
#include <string.h>
int main(){
  char a[25],aux;
  int i,j,tamanho;
  scanf("%s", a);
  tamanho = strlen(a);
  for(i=0,j=tamanho-1 ;i<tamanho/2 ;i++,j--){
    aux = a[i];
    a[i]=a[j];
    a[j]=aux;
  }
  printf("%s\n",a);
  return 0;
}
