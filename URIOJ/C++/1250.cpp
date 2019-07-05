#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int k;
		cin >> k;
		int vet[k+5];
		string str;
		for(int i = 0 ; i < k ; ++i)	
			cin >> vet[i];
		cin >> str;
		int cont = 0;
		for(int i = 0 ; i < k ; ++i){
			if(vet[i] > 2 and str[i] == 'J')
				cont++;
			if(vet[i] <= 2 and str[i] == 'S')
				cont++;
		}

		cout << cont << '\n';
	}

	return 0;
}
