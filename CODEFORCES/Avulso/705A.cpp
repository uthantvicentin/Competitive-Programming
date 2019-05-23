#include <bits/stdc++.h>

using namespace std;

int main(){
	string odd = "I hate that", oddsin = "I hate it";
	string p = "I love that", psin = "I love it";
	string resp;
	int n; cin >> n;
	for(int i = 1 ; i <= n ; ++i){
		if(i%2 == 1 &&  i != n) cout << odd;
		if(i%2 == 1 && i == n) cout << oddsin;
		if(i%2 == 0 && i !=n ) cout << p;
		if(i%2 == 0 && i == n) cout << psin;
		if(i >= 1 && i < n)
			cout << ' ';
	}
	cout << resp << '\n';

	return 0;
}

