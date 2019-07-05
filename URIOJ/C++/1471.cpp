#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,x;
	while(cin >> n >> m){
		map <int,int> v;
		for(int i = 0 ; i < m ; ++i){
			cin >> x;
			v[x]++;
		}
		if(n == m) cout << "*";
		for(int i = 1 ; i <= n ; ++i)
			if(!v[i]) cout << i << " ";
		cout << "\n";
		v.clear();
	}	
	return 0;
}
