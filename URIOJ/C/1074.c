#include <stdio.h>

int main(){
  int i,n,x;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    if((x%2==0)&&(x!=0))
      printf("EVEN ");
    else if((x%2==1)||(x%2==-1))
      printf("ODD ");
    if(x==0)
      printf("NULL\n");
    else if(x > 0)
      printf("POSITIVE\n");
    else
      printf("NEGATIVE\n");
  }

  return 0;
}
