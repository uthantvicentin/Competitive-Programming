#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	int n,x;
	cin >> n;
	bool flag = false;
	while(n--){
		cin >> x;
		if(x != 0){flag = !flag; break;}
	}
	cout << (flag ? "HARD" : "EASY" ) << '\n';

	return 0;
}

