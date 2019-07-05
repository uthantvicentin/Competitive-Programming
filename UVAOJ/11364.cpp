#include <bits/stdc++.h>

using namespace std;

int main(){
	vector <int> v;
	int n;
	cin >> n;
	while(n--){
		int x;
		cin >> x;
		vector <int> v(x);
		for(int i = 0 ; i < x ; ++i)
			cin >> v[i];
		int min = *min_element(v.begin(),v.end());
		int max = *max_element(v.begin(),v.end());
		cout << (2*(max-min)) << endl;
	}
	return 0;
}
