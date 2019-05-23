#include <stdio.h>

int main(){
  long long int aux,flag=0,k,n,i,soma=0,entrou=0;
  scanf("%lld",&n);
  long long int x[n];
  for(i=0;i<n;i++)
    scanf("%lld",&x[i]);
  for(i=0;i<n;i++){
    entrou++;
    if((x[i]%2==0)&&(x[i]>0)){
        x[i]--;
    for(k=i-1;k>=0;k--){
          if(x[k]>0){
            x[k]--;
          }
          else{
            flag=1;
            break;
          }
        }
        flag=1;
      if(flag==1)
        break;

    }
    else
      x[i]--;
    }
      for(i=0;i<n;i++)
        soma+=x[i];
      printf("%lld %lld\n",entrou,soma);
  return 0;
}
