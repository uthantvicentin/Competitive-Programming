#include <bits/stdc++.h>

using namespace std;

int main(){
	int l,r,k;
	cin >> l >> r >> k;
	int cont = 0;
	for(int i = l ; i <= r ; i++){
		if(i%k == 0)
			con++;
	}
	cout << cont << '\n';

	return 0;
}

