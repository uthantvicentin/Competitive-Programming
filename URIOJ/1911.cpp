#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string name,signature;
	while(cin >> n and n){

		map <string,string> mapa;

		for(int i = 0 ; i < n ; ++i){
			cin >> name >> signature;
			mapa[name] = signature;
		}
		int x,cont = 0;
		cin >> x;
		for(int i = 0 ; i < x ; ++i){
			cin >> name >> signature;
			string aux = mapa[name];
			if(aux.size() != signature.size()){
				cont++;
				continue;
			}
			int ok = 0;
			for(int j = 0 ; j < signature.size() ; ++j)
				if(signature[j] != aux[j]){
					ok++;
				}
			if(ok > 1)
				cont++;
		}
		cout << cont << '\n';
	}

	return 0;
}

