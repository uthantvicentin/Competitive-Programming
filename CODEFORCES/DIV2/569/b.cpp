#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; ++i)
		cin >> v[i];
	
	if(n == 1){
		if(v[0] < 0)
			cout << -v[0]-1 << endl;
		else cout << v[0] << endl;
	}
	
	else{
		for(int i = 0 ; i < n ; ++i)
			if(v[i] > -1)
				v[i] = -v[i] -1;

		if(n & 1){
			auto it = min_element(v.begin(),v.end());
			int d = distance(v.begin(),it);
			v[d] = -v[d]-1;
		}
		for(int i = 0 ; i < n ;++i)
			cout << v[i] << ' ';
		cout << '\n';
	}
	return 0;
}
