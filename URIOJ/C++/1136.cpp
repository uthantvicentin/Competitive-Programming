#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,b;
	while(cin >> n >> b and n){
		int bolas[b+5];
		set <int> ans;
		for(int i = 0 ; i < b ; ++i)
			cin >> bolas[i]; 

		for(int i = 0 ; i < b ; ++i)
			for(int j = i ; j < b ; ++j)
				ans.insert(abs(bolas[i]-bolas[j]));
		if(ans.size() == (n+1))
			cout << "Y\n";
		else
			cout << "N\n";
	}

	return 0;
}
