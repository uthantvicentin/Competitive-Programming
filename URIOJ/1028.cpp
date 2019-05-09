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
  // cin.tie(NULL);
  int n;
  cin >> n;
  while(n--){
    int a,b;
    cin >> a >> b;
    int div = mdc(a,b);
    cout << div <<'\n';

  }

  return 0;
}
