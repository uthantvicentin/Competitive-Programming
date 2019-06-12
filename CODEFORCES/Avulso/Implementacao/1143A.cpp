#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int zero = 0, um = 0;
	int vet[n+5];
	for(int i = 0 ; i < n ; ++i){
		cin >> vet[i];
		if(vet[i] == 0)
			zero++;
		else
			um++;
	}
	int i = 0;
	for(i = 0 ; i < n ; ++i){
		if(vet[i] == 1)
			um--;
		else
			zero--;
		if(zero == 0 or um == 0)
			break;
	}

	cout << ++i << endl;


	return 0;
}
