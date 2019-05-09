#include <stdio.h>

int main(){
  int i,pa,pb,n,anos;
  double g1,g2,o,k;

  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
    anos=0;
    if(g2==0){
      while(pa<=pb){
        anos++;
        o=g1/100;
        pa+=pa*o;
        if(anos>100)
          break;
      }
    }
    else{
    while(pa<=pb){
      anos++;
      k=g2/100;
      o=g1/100;
      pb+=pb*k;
      pa+=pa*o;
      if(anos>100)
        break;
    }
  }
    if(anos>100)
      printf("Mais de 1 seculo.\n");
    else
    printf("%d anos.\n",anos);
  }
  return 0;
}
