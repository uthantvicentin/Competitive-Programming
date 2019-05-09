#include<bits/stdc++.h>
#define IOS  ios::sync_with_stdio(false);cin.tie(NULL)
#define endl '\n'

using namespace std;

int main(){
	IOS;
	int n, q;
	cin >> n >> q;
	vector<long int> v(n+1), sum(n+1, 0);
	for(int i = 1; i <= n; ++i){
		cin >> v[i];
		sum[i] = sum[i-1]+ v[i];
	}
	while(q--){
		int l, h;
		cin >> l >> h;
		cout << (sum[h] - sum[l-1])/(h-l+1) << endl;
	}
	return 0;
}
