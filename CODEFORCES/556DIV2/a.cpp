#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int c[35], v[35], r,n,m;
	cin >> n >> m >> r;
	for(int i = 0 ; i < n; ++i) cin >> c[i];
	for(int i = 0 ; i < m ; ++i) cin >> v[i];
	int *menor = min_element(c,c+n);	
	int *maior = max_element(v,v+m);
	if(*menor < *maior){
		int	x = r / (*menor);
		r = r % *menor;
		r = r + x*(*maior);
	}
	cout << r << endl;

	return 0;
}

