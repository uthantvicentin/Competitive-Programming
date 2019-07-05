#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m){
		int x;
		int mat[n][m];
		int ok = 0;
		for(int i = 0 ; i < n ; ++i){
			int cont = 0;
			for(int j = 0 ; j < m ; ++j){
				cin >> x;
				if(x > 0)
					cont++;
			}
			if(cont == m)
				ok++;
		}
		cout << ok << '\n';
	}

	return 0;
}
