#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m and n){
		vector <int> a(n),b(m);

		for(int i = 0 ; i < n ; ++i)
			cin >> a[i];
		for(int i = 0 ; i < m ; ++i)
			cin >> b[i];

		sort(a.begin(),a.end());
		sort(b.begin(),b.end());

		if(a[0] < b[0])
			cout << "Y\n";
		else{
			int cont = 0;
			for(int i = 0 ; i < m ; ++i)
				if(a[0] == b[i])
					cont++;
			if(cont > 1)
				cout << "N\n";
			else{
				auto rep = unique(a.begin(), a.end());
				a.erase(rep, a.end());	

				auto rep2 = unique(b.begin(), b.end());
				b.erase(rep, b.end());	

				if(a[0] >= b[0] and a[0] >= b[1])
					cout << "N\n";
				else
					cout << "Y\n";
			}
		}
	}
	return 0;
}
