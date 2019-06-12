#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	m*=2;
	int mat[n+5][m+5];
	int cont = 0; 
	int aux = 0;
	for(int i = 0 ; i < n ; ++i){
		for(int j = 0 ; j < m ; ++j){
			cin >> mat[i][j];
			if(j % 2 == 0 and mat[i][j] == 1)
				aux++;
			if(j & 1){
				if(aux > 0 || mat[i][j] == 1)
					cont++;
				aux = 0;
			}
		}
	}
	cout << cont << endl;
	return 0;
}
