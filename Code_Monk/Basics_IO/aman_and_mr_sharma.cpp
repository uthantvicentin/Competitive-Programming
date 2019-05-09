#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int d,r,x;
	int ans = 0;
	cin >> d;
	while(d--){
		cin >> r >> x;
		double c = 2 * r* (22.0/7);
		x = x*100;
		if(x >= c)
			ans++;
		}
		cout << ans;

	return 0;
}

