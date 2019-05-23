#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	long long a,b;
	string bit1,bit2;
	cin >> n;
	
	for(int i = 1 ; i <= n ; ++i){
	
		cin >> bit1 >> bit2;
		a = stoll(bit1,0,2);
		b = stoll(bit2,0,2);
		long long resp = __gcd(a,b);
		cout << "Pair #" << i << ": ";
		cout << (resp == 1 ? "Love is not all you need!" : "All you need is love!") << '\n';

	}

	return 0;
}

