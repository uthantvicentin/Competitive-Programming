#include <bits/stdc++.h>

using namespace std;

int main(){
	set <int> vet;
	set <int>::iterator it;
	int n,m,x;
	cin >> n >> m;
	for(int y = 0 ; y < m ; y++){
		cin >> x;
		vet.insert(x);
	}
	for(int i = 0 ; i < n ; ++i){
		cin >> x;
		it = vet.find(x);
		if(it != vet.end())
			cout << "0\n";
		else{
			vet.insert(x);
			cout << "1\n";
			}

	}		

	return 0;
}

