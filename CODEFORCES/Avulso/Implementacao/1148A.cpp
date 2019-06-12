#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ll a,b,ab;
	cin >> a >> b >> ab;
	ll r = ab * 2 + min(a,b)*2;
	if(max(a,b) > min(a,b))
		r++;
	cout << r << endl;	
	return 0;
}
