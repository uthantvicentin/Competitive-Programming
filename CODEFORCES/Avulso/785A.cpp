#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,soma = 0;
	string aux;
	cin >> n;
	while(n--){
		cin >> aux;
		if(aux.compare("Tetrahedron") == 0)
			soma += 4;
		else if(aux.compare("Cube") == 0)
			soma += 6;
		else if(aux.compare("Octahedron") == 0)
			soma += 8;
		else if(aux.compare("Dodecahedron") == 0)
			soma += 12;
		else 
			soma += 20;
	}
	cout << soma << '\n';
	return 0;
}

