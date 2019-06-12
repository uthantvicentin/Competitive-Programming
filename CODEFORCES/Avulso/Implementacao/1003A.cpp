#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int v[105];
	memset(v,0,sizeof(v));
	for(int i = 1 ; i <=n ; ++i){
		int x;
		cin >> x;
		v[x]--;
	}
	sort(v,v+101);
	cout << -v[0] << endl;
	return 0;
}
