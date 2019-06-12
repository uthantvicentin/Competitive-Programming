#include <bits/stdc++.h>

using namespace std;

int main(){
	map <int,int> mapa;
	int n,m;
	cin >> n >> m;
	int x,k;
	vector <int> vet;
	for(int i = 0 ; i < n ; ++i){
		cin >> x;
		vet.push_back(x);
	}

	while(m--){
		cin >> x;
		auto it = find(vet.begin(),vet.end(),x);
		if(it != vet.end()){
			int d = distance(vet.begin(),it);
			mapa[d] = x;
		}
	}

	if(!mapa.empty()){
		auto it = mapa.begin();
		for( ; it != mapa.end() ; ++it)
			cout << (*it).second <<  ' ';
		}
	
	cout << endl;
	
	return 0;
}
