#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m and n){
		vector <int> v1,v2;
		int x;	
		for(int i = 0 ; i < n ; ++i){
			cin >> x;
			v1.push_back(x);
		}
		for(int i = 0 ; i < m ; ++i){
			cin >> x;
			v2.push_back(x);	
		}
		sort(v1.begin(), v1.end());	
		sort(v2.begin(), v2.end());
		auto ip1 = unique(v1.begin(), v1.begin() + n); 
		auto ip2 = unique(v2.begin(), v2.begin() + m); 
		v1.resize(std::distance(v1.begin(), ip1)); 
		v2.resize(std::distance(v2.begin(), ip2)); 
		int cont = 0;
		for(int i = 0 ; i < v2.size() ; ++i){
			auto pos = find(v1.begin(),v1.end(),v2[i]);
			if(pos == v1.end())
				cont++;
		}

		int cont2 = 0;
		for(int i = 0 ; i < v1.size() ; ++i){
			auto pos = find(v2.begin(),v2.end(),v1[i]);
			if(pos == v2.end()){
				cont2++;	
			}
		}
		cout << min(cont,cont2) << "\n";
	}
	return 0;
}
