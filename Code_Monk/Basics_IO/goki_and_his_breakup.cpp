#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	//IOS;
	int n,x,y;
	cin >> n >> x;
	while(n--){
		cin >> y;
		cout << ( y >= x ? "YES" : "NO") << endl;
	}

	return 0;
}

