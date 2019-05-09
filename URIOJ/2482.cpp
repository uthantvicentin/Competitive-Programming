#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string pais,traducao;
	map <string,string> mapa;
	while(n--){
			cin >> pais;
			cin.ignore();
			getline(cin,traducao);
			mapa[pais] = traducao;	
		}
	cin >> n;
	int newline = 1;
	while(n--){
		if(newline != 1)
			cout << '\n';
		cin.ignore();
		getline(cin,pais);
		cin >> traducao;
		cout << pais << '\n';
		cout << mapa[traducao] << '\n';
		newline++;
	}
	cout << '\n';
	mapa.clear();

	return 0;
}

