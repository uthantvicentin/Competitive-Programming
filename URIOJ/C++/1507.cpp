#include <bits/stdc++.h>

using namespace std;

bool procurasub(const string &a, const string &b){
	int i = 0, j = 0;
	while(i < a.size() && j < b.size()){
		if(a[i] == b[j])
			j++;
		i++;

	}
	return (j == b.size());
}

int main(){
	ios_base::sync_with_stdio(false);
	int N,X;
	string palavra,subpalavra;
	cin >> N;
	for(int i = 0 ; i < N ; i++){
		cin >> palavra >> X;
		while(X--){
			cin >> subpalavra;
			if(procurasub(palavra,subpalavra))
				cout << "Yes" << '\n';
			else
				cout << "No" << '\n';		
		}

	}



	return 0;
}
