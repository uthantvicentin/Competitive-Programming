#include <bits/stdc++.h>

using namespace std;

int main(){
	int v[4];
	
	for(int i = 0 ; i < 4 ; ++i)
		cin >> v[i];
	
	string str;
	cin >> str;
	int soma = 0;
	for(int i = 0 ; i < str.length() ; ++i){
		int n = (int) str[i] - 48;
		soma += v[--n];
	}

	cout << soma << endl;

	return 0;
}
