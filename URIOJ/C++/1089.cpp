#include <bits/stdc++.h>

using namespace std;


int main(){
	int n;
	while(cin >> n){
		int cont = 0;
		vector <int> vet;
		for(int i = 0 ; i < n ; ++i){
			int a; cin >> a;
			vet.push_back(a);	
		}
		vet.push_back(vet[0]);
		vet.push_back(vet[1]);
		for(int i = 1 ; i < n+1 ; ++i){
			if(vet[i] < vet[i-1] and vet[i+1] > vet[i])
				cont++;
			if(vet[i] > vet[i-1] and vet[i+1] < vet[i])
				cont++;
		}
		cout << cont << endl;
	}
	return 0;
}
