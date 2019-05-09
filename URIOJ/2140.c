#include <stdio.h>

int main(){
  int a,b,troco,count100=0,count50=0,count20=0,count10=0,count5=0,count2=0;
  while(1){
    scanf("%d %d",&a,&b);
    if(a==0 && a==b)
      break;
    count100=count50=count20=count10=count5=count2=0;
    troco=b-a;
    do{
      if(troco>=100){
        troco-=100;
        count100++;
      }
      if(troco>=50 && troco<100){
          troco-=50;
          count50++;
      }
      if(troco>=20 && troco<50){
          troco-=20;
          count20++;
      }
      if(troco>=10&& troco<20){
          troco-=10;
          count10++;
      }
      if(troco>=5 && troco<10){
          troco-=5;
          count5++;
      }
      if(troco>=2 && troco<5){
        troco-=2;
          count2++;
      }
    }while(troco>1);
    if((count100 || count50 || count20 || count10 || count5 || count2) >1)
        printf("impossible\n");
      else if((count100+count50+count20+count10+count5+count2)!=2)
        printf("impossible\n");
        else if(troco==1)
        printf("impossible\n");
      else
        printf("possible\n");
  }
  return 0;
}
