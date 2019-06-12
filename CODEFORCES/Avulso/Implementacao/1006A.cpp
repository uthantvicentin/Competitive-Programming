#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> v;
	int m = 0;
	int x,maior = 0;
	for(int i = 1 ; i <= n ; ++i){
		cin >> x;
		if(x & 1)
			v.push_back(x);
		else
			v.push_back(--x);
	}
	
	for(int i = 0 ; i < v.size() ; ++i)
		cout << v[i] << ' ';
	cout << endl;


	return 0;
}
