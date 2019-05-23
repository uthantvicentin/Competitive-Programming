#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	if(a%b == 0)
		return b;
	else
		return mdc(b,a%b);
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int num,d1,d2,n1,n2,x,y,div;
  char op;
  scanf("%d\n",&num);
  while(num--){
    scanf("%d / %d %c %d / %d",&n1,&d1,&op,&n2,&d2);
    if(op=='+'){
      x = n1*d2+n2*d1;
      y = d1*d2;
    }

    else if(op=='-'){
      x = n1*d2-n2*d1;
      y = d1*d2;
    }

    else if(op=='*'){
      x = n1*n2;
      y = d1*d2;
    }

    else{
      x = n1*d2;
      y = n2*d1;
    }

    div = mdc(x,y);
    printf("%d/%d = %d/%d\n", x, y, x/div, y/div);

  }
  return 0;
}
