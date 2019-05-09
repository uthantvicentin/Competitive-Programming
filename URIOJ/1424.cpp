#include <bits/stdc++.h>

using namespace std;

vector <int> vetor[1000010];

int main(){
	int n,m,k,v,x;
	while(cin >> n >> m){
		memset(vetor,0,sizeof vetor);
		for(int i = 1 ; i <= n ; i++){
			cin >> x;
			vetor[x].push_back(i);
		}


		while(m--){
			cin >> k >> n;
			k--;
			k < vetor[n].size() ?	cout << vetor[n][k] << '\n' : cout << "0\n";
		}
	}

	return 0;
}

