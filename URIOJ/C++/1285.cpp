#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;

	while(cin >> n >> m){
		int vet[10];
		int cont = 0;
		for(int i = n ; i <= m ; ++i){
			string aux = to_string(i);
			memset(vet,0,sizeof(vet));
			
			for(int j = 0 ; j < aux.length() ; ++j)
				vet[aux[j] - '0']++;

			bool flag = false;
			for(int i = 0 ; i < 10 ; ++i)
				if(vet[i] > 1){
					flag = true;
					break;
				}
			if(!flag){
				cont++;
			}
		}
		cout << cont << '\n';
	}
	return 0;
}
