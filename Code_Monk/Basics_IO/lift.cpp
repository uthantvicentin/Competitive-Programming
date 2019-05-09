#include <bits/stdc++.h>

using namespace std;

int main(){
	int a = 0,b = 7;
	int n,x;
	int ans;
	cin >> n;
	while(n--){
		cin >> x;
		if(abs(a - x) < abs(b - x)){
			cout << 'A' << '\n';
			a = x;
		}

		else if(abs(b-x) < abs(a-x)){
			cout << 'B' << '\n';
			b = x;
		}

		else{
			if(a < b){
				a = x;
				cout << 'A' << '\n';
			}
			else{
				b = x;	
				cout << 'B' << '\n';
			}
		}
	}


	return 0;
}

