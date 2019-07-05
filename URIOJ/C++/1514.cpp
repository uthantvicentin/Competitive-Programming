#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m and n){
		int cont = 4;
		int mat[n][m];
		bool feztodas = false;
		bool nenhuma = false;
		for(int i = 0 ; i < n ; ++i){
			int fez = 0;
			for(int j = 0 ; j < m ; ++j){
				cin >> mat[i][j];
				if(mat[i][j] == 1)
					fez++;
			}

			if(fez == 0)
				nenhuma = true;
			if(fez == m)
				feztodas = true;
		}

		if(feztodas)
			cont--;
		if(nenhuma)
			cont--;

		feztodas = false;
		nenhuma = false;
		int j = 0;
		while(j < m){
			int fez = 0;
			for(int i = 0 ; i < n ; ++i){
				if(mat[i][j] == 1)
					fez++;
			}
			j++;
			if(fez == n){
				feztodas = true;
				break;
			}
		}	
		if(feztodas)
			cont--;

		feztodas = false;
		nenhuma = false;
		j = 0;
		while(j < m){
			int fez = 0;
			for(int i = 0 ; i < n ; ++i){
				if(mat[i][j] == 1)
					fez++;
			}
			j++;
			if(fez == 0){
				feztodas = true;
				break;
			}
		}	
		if(feztodas)
			cont--;

		cout << cont << endl;
	}
	return 0;
}

/*
	 Todo problema foi resolvido por pelo menos uma pessoa (não necessariamente a mesma).
*/
