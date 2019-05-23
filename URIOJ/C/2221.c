#include <stdio.h>

int main(){
  int n,g1,g2,bonus,a1,d1,l1,a2,d2,l2;
  scanf("%d",&n);
  while(n>0){
    scanf("%d",&bonus);
    scanf("%d %d %d",&a1,&d1,&l1);
    scanf("%d %d %d",&a2,&d2,&l2);
    if(l1%2==0)
      g1=((a1+d1)/2)+bonus;
      else
        g1=((a1+d1)/2);
    if(l2%2==0)
      g2=((a2+d2)/2)+bonus;
      else
        g2=((a2+d2)/2);
    if(g1>g2)
      printf("Dabriel\n");
    else if(g2>g1)
      printf("Guarte\n");
    else
      printf("Empate\n");
    n--;
  }
  return 0;
}
