#include <bits/stdc++.h>

using namespace std;

int main(){

	set<int>l,c;
	
	int n,m;
	cin >> n >> m;

	string str[n];

	for(int i = 0 ; i < n ; ++i)
		cin >> str[i];
		int cont = 0;

	for(int i = 0 ; i < n ; ++i)
		for(int j = 0 ; j < m ; ++j)
			if(str[i][j] == 'S'){
					l.insert(i);
					c.insert(j);	
			}
		
		int r = l.size();
		int co = c.size();
	
		cout << n*m - r*co << endl;
	
	return 0;
}
