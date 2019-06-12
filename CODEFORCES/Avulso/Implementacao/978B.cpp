#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,soma = 0;
	cin >> n;
	string str;
	cin >> str;
	int cont = 0;
	for(int i = 0 ; i < str.length() ; ){
		cont = 0;
		if(str[i] == 'x'){
			int k = i;
			while(str[k++] == 'x')
				cont++;
			if(cont > 2)
				soma += cont - 2; 
		}
		if(cont > 0)
			i += cont;
		else
			i++;	
		}
	
	cout << soma << endl;
	return 0;
}
