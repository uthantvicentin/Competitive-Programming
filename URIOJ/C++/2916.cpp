#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n,k;
	while(cin >> n >> k){

		vector<long long> a(n);

		for(int i = 0 ; i < n ; ++i){
			cin >> a[i];
			a[i] %= 1000000007;
		}

		sort(a.rbegin(),a.rend());

		long long sum = 0;

		for(int i = 0 ; i < k ; ++i) sum = (sum+a[i]) % 1000000007;

		cout << sum << endl;
	}
	return 0;
}
