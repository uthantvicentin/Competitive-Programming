#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	int v[10005];
	cin >> n >> m;
	for(int i = 0 ; i < n ; ++i) cin >> v[i];
	int resp = 0;
	priority_queue< pair<int,int> > fila;
	for(int i = 0 ; i < n ; ++i) fila.push( make_pair (0, -i) );
	while(m--){

		int c; cin >> c;
		int id = -fila.top().second;
		int livre = -fila.top().first;
		fila.pop();
		fila.push(make_pair( -(livre + v[id] * c), -id));
		cout << livre+v[id] * c << '\n';
		resp = max(resp,livre+v[id]*c);
	
	}
	cout << resp <<'\n';

	return 0;
}

