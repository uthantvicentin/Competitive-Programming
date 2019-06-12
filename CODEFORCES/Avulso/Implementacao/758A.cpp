#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, maior = 0,ans = 0;
	cin >> n;
	vector <int> v(n);
	for(int i = 0 ; i < n ; ++i){
		cin >> v[i];
		if(v[i] > maior)
			maior = v[i];
	}

	for(int i = 0 ; i < n ; ++i)
		if(v[i] < maior)
			ans+= maior-v[i];
	cout << ans << endl;



	return 0;
}
