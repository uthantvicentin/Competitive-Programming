#include <bits/stdc++.h>

using namespace std;

int main(){
	int v[1005];
	int n,m;
	while(cin >> n >> m and n){
		memset(v,0,sizeof(v));
		for(int i = 0 ; i < n ; ++i){
			int x; cin >> x;v[x]++;
		}
		int cont = 0;
		for(int i = 1 ; i <= 1000 ; ++i)
			if(v[i] >= m)
				cont++;

		if(cont != 0)
			cout << cont << '\n';
		else
			cout << 0 << '\n';

	}

	return 0;
}
