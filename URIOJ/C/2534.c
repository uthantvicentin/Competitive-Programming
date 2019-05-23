#include <stdio.h>

int main(){
  int x,count = 0,o,n,i,k,y = 0,aux,auxiliar;
  int p[100];
  while( scanf("%d %d",&n,&k) != EOF ){
    y = 0;
    for(i=0;i<n;i++)
      scanf("%d", &p[i]);
  do{
  for(i = 0 ; i < n ; i++){
    auxiliar = p[i];
    for(o = i+1 ; o < n ; o++){
      if(auxiliar < p[o]){
        p[i] = p[o];
        p[o] = auxiliar;
        break;
      }
    }
  }
  count = 0;
  for(i = 0 ; i < n ; i++)
    if( p[i] >= p[i+1] )
      count++;
}while(count <= n-1);
    y=0;

for(i=0;i<k;i++){
    scanf("%d",&aux);
    printf("%d\n",p[aux-1]);
  }

}
  return 0;
}
