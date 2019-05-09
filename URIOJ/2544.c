#include <stdio.h>
#include <math.h>

int main(){
  long long int a;
  long long int x;
  while(scanf("%lld",&a)!=EOF){
    x = log2(a);
    printf("%lld\n",x);
  }
  return 0;
}
