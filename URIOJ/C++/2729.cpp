#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string str;
	cin >> n;
	cin.ignore();
	while(n--){
		set <string> resp;
		set <string>::iterator it;
		getline(cin,str);
		stringstream f(str);
		string aux;
		while(f >> aux) resp.insert(aux);
		it = resp.begin();
		int cont = 0;
		for( ; it != resp.end() ; ++it){ 
			if(cont < resp.size()-1)
				cout << *it << ' ';
			else
				cout << *it << '\n';

			cont++; 
		}
	}

	return 0;
}

