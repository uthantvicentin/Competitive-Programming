#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int cont = 0,x;
	vector <int> v;
	for(int i = 0 ; i < n ; ++i){
		cin >> x;
		if(x == 1 and i != 0){
			v.push_back(cont);
			cont = 0;
		}
		cont++;
	}
	v.push_back(cont);
	cout << v.size() << endl;
	for(int i = 0 ; i < v.size() ;++i)
		cout << v[i] << ' ';
	cout << endl;
	return 0;
}
