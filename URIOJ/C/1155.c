#include <stdio.h>

int main(){
   double a,c, S=0;
   for(a=1; a<=100; a++){
       S+=1/a;
   }
   printf("%.2lf\n",S);
   return 0;
}
