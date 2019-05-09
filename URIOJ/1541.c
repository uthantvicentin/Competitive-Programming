#include <stdio.h>
#include <math.h>
int main(){
   int a,b,c,total,e,r;
   while(1){
       scanf("%d", &a);
       if(a==0)
        break;
       else{
           scanf("%d%d", &b,&c);
           total=a*b;
           e=(total*100)/c;
           r=pow(e,.5);
           printf("%d\n",r);
       }
   }
   return 0;
}
