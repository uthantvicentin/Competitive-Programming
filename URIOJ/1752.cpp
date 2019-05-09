#include <bits/stdc++.h>

using namespace std;

map<string,string>mapa;
map<string,string>::iterator it;
int main(){
	int n,newline = 1,x,y;
	string japones,portugues;
	cin >> n;
	while(n--){
		if(newline != 1)
			cout << '\n';
		cin >> x >> y;
		for(int i = 0 ; i < x ; ++i){
			cin >> japones;
			cin.ignore();
			getline(cin,portugues);
			mapa[japones] = portugues;
		}
		string resposta;
		vector <string> v;
		for(int i = 0 ; i < y ; ++i){
			char str[81];
			cin.getline(str,81);
			char *pointer;
			pointer = strtok(str," ");
			while(pointer != NULL){
				v.push_back(pointer);
				pointer = strtok(NULL," ");
			}
			for(int j = 0 ; j < v.size() ; ++j){
				it = mapa.find(v[j]);
				if(it == mapa.end()) resposta += v[j];	
				else resposta += mapa[v[j]];
				if(j < v.size()-1) resposta += ' ';
				else resposta+= '\n';
			}
			cout << resposta;
			resposta.clear();
			v.clear();
		}
		mapa.clear();
		newline++;
	}
	cout << '\n';
	return 0;
}

