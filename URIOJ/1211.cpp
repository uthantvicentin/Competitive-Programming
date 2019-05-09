#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string P;
	vector <string> O;

	int N,X,cont;
	while(cin >> N){
		cin.ignore();
		for(int i = 0 ; i < N ; i++){
			getline(cin,P);
			O.push_back(P);
		}
		sort(O.begin(),O.end());
		int cont = 0;
		for(int i = 1 ; i < N ; i++)
			for(int j = 0 ; j < O[i].length(); j++)
				if(O[i][j]==O[i-1][j])
					cont++;
				else
					break;

		cout << cont << '\n';


		O.clear();
	}

	return 0;
}
