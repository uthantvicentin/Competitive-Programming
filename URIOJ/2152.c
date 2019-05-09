#include <stdio.h>

int main(){
  int n,a,b,c;
  scanf("%d",&n);
  while(n>0){
    scanf("%d %d %d",&a,&b,&c);
    if(c==1)
      printf("%02d:%02d - A porta abriu!\n",a,b);
      else
        printf("%02d:%02d - A porta fechou!\n",a,b);
    n--;
  }

  return 0;
}
