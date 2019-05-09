#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long m = 1000000007,ans = 1;
	int n;
	cin >> n;
	unsigned long long A[n];
	for(int i = 0 ; i < n ; ++i) cin >> A[i];
	for(int i = 0 ; i < n ; ++i) ans = (ans * A[i]) % m;
	cout << ans << '\n';

	return 0;
}

