#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x,y;
	while(cin >> n){
		int A[100005], j = 0;

		while(n--){
			cin >> x >> y;
			for(int i = x ; i <= y ;++i) A[j++] = i;
		}
		cin >> x;
		sort(A,A+j);
		int begin = lower_bound(A, A+j, x)-A;
		int end = upper_bound(A, A+j, x)-A;
		begin < end ? cout << x << " found from " << begin << " to " << end-1 << '\n' : 	cout << x << " not found" << '\n';
		}

		return 0;
	}

