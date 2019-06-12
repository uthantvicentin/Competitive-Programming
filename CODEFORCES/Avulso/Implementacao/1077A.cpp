#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
	ll n;
	ll a,b,k,soma;
	cin >> n;
	while(n--){
		cin >> a >> b >> k;	
		soma = 0;
		if(k & 1){
			soma = a *((k/2)+1) - (b*(k/2));	
		}
		else
			soma = a * (k/2) - b * (k/2);
	
	cout << soma << endl;
	}
	return 0;
}


/*
	 5 2 3




 */
