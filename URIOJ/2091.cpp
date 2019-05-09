#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	long long n;
	while(cin >> n and n){
		
		unsigned long long x,a[100005];
		
		for(int i = 0 ; i < n ; ++i)
			cin >> a[i];
		
		x = a[0];

		for(int i = 1 ; i < n ; ++i)
			x = x ^ a[i];
					
		cout << x << endl;
	}

	return 0;
}

