#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str;
	map <string, int> mapa;
	for(int i = 0 ; i < n ; ++i){
		cin >> str;
		cout << (mapa[str] > 0 ? "YES\n" : "NO\n");
		mapa[str]++;
		}

	return 0;
}
