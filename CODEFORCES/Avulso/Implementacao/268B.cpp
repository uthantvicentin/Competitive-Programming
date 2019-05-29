#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
	int n;
	cin >> n;
	int res = 0;
	for(int i = 0 ; i < n ; ++i){
		res += n - i + (n - i - 1) * i;
		cout << res << ' ';
	}
	cout << endl;
	cout << res << endl;

	return 0;
}
