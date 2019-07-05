#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int j = 0 ; j < n ; ++j){
		int o;
		cin >> o;
		set <int> v;
		for(int i = 0 ; i < o ; ++i){
			int x; cin >> x; v.insert(x);
		}

		cout << v.size() << '\n';
	}

	return 0;
}
