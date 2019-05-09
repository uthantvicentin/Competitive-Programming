#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	long long n;
	cin >> n;
	vector <long long> a(n+1,0),sum(n+1,0);
	long long aux[n+1],size;
	set <long long> ans;
	for(long long i = 1 ; i <= n ; ++i){
		cin >> a[i];
		sum[i] = a[i]+sum[i-1];
	}

	for(long long i = 1 ; i <=n ;++i){
		long long j = i;
		long long cont = 2;
		size = j+cont;
		while(size <= n){
			 cont++;
			 size += cont;
		}
		if(size > n)
			size-=cont;
		aux[i] = size;
	}
	for(long long i = 1 ; i <=n ;++i){
		size = sum[aux[i]]-sum[i-1];
		ans.insert(size);	
	}
	auto it = ans.end();
	--it;
	cout << *it << endl;	
	return 0;
}

/*

6 - 1 = 5
6 - 2 = 4
6 - 3 = 3
6 - 4 = 2 

1 2 3 4 5 6 7 8 9 10

1+ 2+3 4+5+6 7+8+9+10

2+ 3+4 5+6+7
3+ 4+5 6+7+8
4+ 5+6 7+8+9
5+ 6+7 8+9+10
6+ 7+8
7+ 8+9
8+ 9+10

9
10
*/
