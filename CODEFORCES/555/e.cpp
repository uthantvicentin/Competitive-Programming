#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n;
	cin >> n;
	vector <int> a(n);
	multiset <int> b;
	for(int i = 0 ; i < n ; ++i) cin >> a[i];
	for(int i = 0 ; i < n ; ++i){
		int x;
		cin >> x;
		b.insert(x);
	}
	for(int i = 0 ; i < n ; ++i){
		auto it = b.lower_bound(n-a[i]);
		if(it == b.end()) it = b.begin();
		cout << ((a[i]+*it)%n) << ' ';
		b.erase(it);	
	}
	cout << endl;

	return 0;
}


/*

	 4
	 0 1 2 1
	 3 2 1 1


	 0 1 2 1
	 1 3 2 1

	 1 0 0 2



	 7
	 2 5 1 5 3 4 3
	 2 4 3 5 6 5 1





	 5 2 6 3 4 5 1
 */
