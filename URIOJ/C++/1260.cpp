#include <bits/stdc++.h>

using namespace std;

int main(){
	string arvore;
	cout.precision(4);
	cout.setf(ios::fixed);
	int n,line = 1;
	cin >> n;
	cin.ignore();
	cin.ignore();

	while(n--){
		map<string,int> Arvores;
		map<string,int>::iterator i;
		if(line != 1)
			cout << '\n';
		int total = 0;
		while(getline(cin,arvore)){

			if(arvore.size() == 0) break;
			Arvores[arvore]++;
			total++;

		}
		for(i = Arvores.begin() ; i != Arvores.end() ; i++){
			arvore = i->first;
			int x = i->second;
			double resul = x*100/(double)total;
			cout << arvore << ' ' << resul << '\n';
		}
		line++;		
	}
	return 0;
}

