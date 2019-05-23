#include <stdio.h>
#include <string.h>
int main(){
  int QT,N,M,i;
  char nome1[100],nome2[100],e1[6],e2[6];
  scanf("%d",&QT);
  for(i=0;i<QT;i++){
    scanf("%s %s %s %s",&nome1,&e1,&nome2,&e2);
    scanf("%d %d",&N,&M);
    if((N+M)%2==0){
      if(strcmp(e1,"PAR")==0)
        printf("%s\n",nome1);
      else
        printf("%s\n",nome2);
    }
    else{
      if(strcmp(e1,"IMPAR")==0)
        printf("%s\n",nome1);
      else
        printf("%s\n",nome2);
    }
  }
  return 0;
}
