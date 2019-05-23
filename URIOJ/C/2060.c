#include <stdio.h>

int main(){
  int x,n,count2=0,count3=0,count4=0,count5=0;
  scanf("%d",&n);
  while(n>0){
    scanf("%d",&x);
    if(x%2==0)
      count2++;
    if(x%3==0)
      count3++;
    if(x%4==0)
      count4++;
    if(x%5==0)
      count5++;
    n--;
  }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",count2,count3,count4,count5);
  return 0;
}
