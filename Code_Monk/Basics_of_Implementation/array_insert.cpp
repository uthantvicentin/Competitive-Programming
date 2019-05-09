#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	long long n,q;
	cin >> n >> q;
	vector <long long> v(n+5);
	for(int i = 0 ; i < n ; ++i) cin >> v[i];
	while(q--){
		long long x,y,z; cin >> x >> y >> z;
		if(x == 1)
			v[y] = z;
		else{
			if(y < 0 or z >= n)
				cout << "-1";
			else{	
				int sum = 0;
				for(int i = y ; i <= z ; ++i)	
					sum+=v[i];
				cout << sum << endl;
			}
		}
	}

	return 0;
}

/* 

	 1 000 000 000

 */
