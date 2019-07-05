#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m and n){
		int x;
		bool flag;
		int cont;
		int mat[n+5][m+5];
		
		for(int i = 0 ; i < n ; ++i)
			for(int j = 0 ; j < m ; ++j)
				cin >> mat[i][j];
		
		int i = 0;
		while(i < n){
			flag = false;
			cont = 0;
			for(int j = 0 ; j < m ; ++j){
				if(mat[i][j] == 1)
					cont++;
				}
			
			if(cont == m){
				flag = true;	
				break;
			}
			i++;
		}

		cout << (flag? "yes" : "no") << '\n';
	}
	return 0;
}
