#include <bits/stdc++.h>

using namespace std;
map <string,int> mapa;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x,y,salary;
	string job;
	while(cin >> x >> y){
		for(int i = 0 ; i < x ; ++i){
			cin >> job >> salary;
			mapa[job] = salary;
		}
		while(y--){
			int total = 0;
			while(cin >> job && job.compare(".") != 0)
				total += mapa[job];	
			cout << total<<'\n';
		}

	}


	return 0;
}

