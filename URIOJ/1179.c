#include <stdio.h>

int main(){
  int p[5],im[5],i,j=0,k=0,x;
  for(i=1;i<=15;i++){
    scanf("%d",&x);
    if(x%2==0){
      if(k==5){
          for(k=0;k<5;k++)
            printf("par[%d] = %d\n",k,p[k]);
          k=0;
      }
      p[k]=x;
      k++;
    }
    else{
      if(j==5){
          for(j=0;j<5;j++)
            printf("impar[%d] = %d\n",j,im[j]);
          j=0;
      }
        im[j]=x;
        j++;
    }

  }
  for(i=0;i<j;i++)
    printf("impar[%d] = %d\n",i,im[i]);
  for(i=0;i<k;i++)
    printf("par[%d] = %d\n",i,p[i]);
  return 0;
}
