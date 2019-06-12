#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <int> v;
	int n,x;
	cin >> n;
	for(int i = 0 ; i < n ; ++i){
		cin >> x;
		v.push_back(x);
	}
	int soma = 0;
	sort(v.begin(),v.end());
	
	for(int i = 0 ; i < v.size()-1 ; ){
		if(v[i] != v[i+1]){
			soma+= v[i+1]-v[i];
		}
		i+=2;
	}

	cout << soma << endl;

	return 0;
}
