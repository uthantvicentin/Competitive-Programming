#include <bits/stdc++.h>

using namespace std;

int bubble(int *aux, int n){
	int cont = 0;
	for(int i = 0 ; i < n ; ++i)
		for(int j = i +1 ; j < n ; ++j)
			if(aux[i] > aux[j]){
				swap(aux[i],aux[j]);
				cont++;
			}

	return cont;
}



int main(){
	int n;
	int x;
	while(cin >> n){
		int v1[n+5],v2[n+5],aux[n+5];

		for(int i = 0 ; i < n ; ++i)
			cin >> v1[i];

		for(int i = 0 ; i < n ; ++i)
			cin >> v2[i];

		for(int i = 0 ; i < n ;++i)
			for(int j = 0 ; j < n ; ++j)
				if(v1[i] == v2[j])
					aux[i] = j + 25;

		cout << bubble(aux,n) << '\n';
	}

	return 0;
}
