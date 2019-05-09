#include <stdio.h>
#include <string.h>
int main(){
  int i,j,n,y,x=1,k,count=0;
  char e[10],aux[10];
  while(1){
  scanf("%d",&n);
  if(n==0)
    break;
  int m[n][n];
  x=1;
  y=1;
  for(i=0;i<n;i++){
    k=x;
    for(j=0;j<n;j++){
      m[i][j]=k;
      k=k*2;
    }
    x=x*2;
  }
  sprintf(aux,"%d",m[n-1][n-1]);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      sprintf(e,"%d",m[i][j]);
      if(strlen(e) < strlen(aux)){
        count=strlen(e);
        do{
        printf(" ");
        count++;
      }while(count < strlen(aux));
      if(j==n-1)
      printf("%d",m[i][j]);
      else
      printf("%d ",m[i][j]);
    }
    else if(j==n-1)
      printf("%d",m[i][j]);
    else{
    printf("%d ",m[i][j]);
}
  }
  printf("\n");
}
printf("\n");
}
  return 0;
}
