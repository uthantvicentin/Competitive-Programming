#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,cont;
	string a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		for(int i = 0 ; i < a.length() ; ++i)
			for(int j = 0 ; j < b.length() ; ++j){
				if(b[j] == a[i]){
					b.erase(b.begin()+j);
					a.erase(a.begin()+i);
					i = 0;
					j = 0;
				}
			}

		cout << a.length() + b.length() << '\n';
	}

	return 0;
}

