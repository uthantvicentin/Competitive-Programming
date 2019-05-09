#include <string.h>
#include <stdio.h>

int main(){
  char n1[10000],n2[100000];
  int aux,i=0,k,count = 0, pos=0,qt=0,flag,h;
  while(scanf("%s",n1)!=EOF){
    scanf("%s",n2);
    count++;
    k = 0;
    aux = 0;
    qt = 0;
    flag = 0;
    i = 0;
    h = 0;
    while( i < strlen(n2)){
      if(n1[k] == n2[i]){
        aux++;
        h = i;
        while(k < strlen(n1)-1){
          k++;
          h++;
          if(n1[k] == n2[h]){
            aux++;
          }
        }
        if(aux == strlen(n1)){
          pos = i+1;
          qt++;
          flag++;
        }
      }
      i++;
      aux = 0;
      k = 0;
  }
  if(flag == 0)
    printf("Caso #%d:\nNao existe subsequencia\n\n",count);
  else
    printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n\n",count,qt,pos);
}
  return 0;
}
