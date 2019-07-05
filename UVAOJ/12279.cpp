#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int qt = 1;
	while(cin >> n and n){
		int x;
		int um = 0, zero = 0;
		for(int i = 0 ; i < n ; ++i){
			cin >> x;
			if(x != 0)
				um++;
			else
				zero++;
		}
		cout << "Case " << qt++ << ": " << um-zero << endl;
	}

	return 0;
}
