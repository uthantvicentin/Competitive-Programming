#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main(){
		ll a,b;
		while(cin >> a and a){
			int b = a;
			while(a != 1){
				if(a % 2 == 1 ){
					a = a*3 +1;
				}
				else
					a /= 2;
				if(a > b)
					b = a;
			}	
		cout << b << '\n';	
		}
	return 0;
}
