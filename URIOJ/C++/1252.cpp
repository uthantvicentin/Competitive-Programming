#include <bits/stdc++.h>

using namespace std;

int m;

bool comp(int a, int b){
	if(a%m == b%m){
		if(abs(a)%2 == abs(b)%2){
			if(a%2 == 0) return b > a;
			else return a > b;
		}
		return abs(a)%2 > abs(b)%2;
	}
	return a%m < b%m;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while(cin >> n >> m and n and m){
		int A[n];
		cout << n << ' ' << m << '\n';
		for(int i = 0 ; i < n ; ++i) cin >> A[i];
		sort(A,A+n,comp);
		for(int i = 0 ; i < n ; ++i) cout << A[i] << '\n';
	}
	cout << "0 0\n";
	return 0;
}

