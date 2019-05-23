#include <bits/stdc++.h>

using namespace std;

int main(){
	string n;
	int k;
	cin >> n >> k;
	while(k--){
		int x = stoi(n);
		if(n[n.size()-1] == '0') x /= 10;
		else x--;
		n = to_string(x);
	}
	cout << n << '\n';


	return 0;
}

