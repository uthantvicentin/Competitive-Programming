#include <bits/stdc++.h>

using namespace std;

int main(){
	int v[55],t[55];
	int n,c;
	cin >> n >> c;
	for(int i = 0 ; i < n ; ++i)
		cin >> v[i];
	for(int i = 0 ; i < n ; ++i)
		cin >> t[i];
	
	int soma = 0;
	int l = 0,r = 0;
	for(int i = 0 ; i < n ; ++i){
		soma += t[i];
		l += max(0,v[i]-c*soma);
	}
	
	
	soma = 0;
	for(int i = n-1 ; i > -1 ; --i){
		soma += t[i];
		r += max(0,v[i]-c*soma);
	}
	
	if(l > r)
		cout << "Limak\n";
	else if(r > l)
		cout << "Radewoosh\n";
	else
		cout << "Tie\n";

	return 0;
}

