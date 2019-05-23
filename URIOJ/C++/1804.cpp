#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;
int BIT[100005],a[100005],n,aux[1000005];

void update(int x, int val){
	for(; x <= n; x += x&-x)
		BIT[x] += val;
}

void ab(int x, int val){
	for(; x <= n; x += x&-x)
		BIT[x] -= val;	
}


int query(int x){
	int sum = 0;
	for( ; x > 0; x -= x&-x)
		sum += BIT[x];
	return sum;
}

int main(){
	IOS;
	cin >> n;
	for(int i = 1 ; i <= n ; ++i){
		cin >> a[i];
		update(i,a[i]);
		aux[i] = a[i];
	}
	string n;
	int num;
	while(cin >> n >> num){
		if(n == "a"){
			ab(num,aux[num]);
		}
		else
			cout <<	query(num-1) << endl;

	}

	return 0;
}

/*
	 1 2 3 4 5 4 3 2 1 2 = 27
	 1 2 3 4 5 4 3 2 0 2 = 26
	 1 0 3 4 5 4 3 2 0 2 = 24
	 1 0 3 4 0 4 3 2 0 2 = 19
	 1 0 3 4 0 0 3 2 0 2 = 13
 */
