#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	string n;
	int cont = 0;
	cin >> n;
	for(int i = 0 ; i < n.length() ;++i)
		if(isdigit(n[i]))
			cont++;
	if(cont == 10){
		cont = 0;
		int x;
		string aux;
		for(int i = 0 ; i < n.length() ;++i){
			aux =n[i];
			x = stoi(aux);
			cont += (i+1)*x; 
		}
		if(cont % 11 == 0)
			cout << "Legal ISBN" << endl;
		else
			cout << "Illegal ISBN" << endl;
	}
	else
		cout << "Illegal ISBN" << endl;
	return 0;
}

