#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int ad[10];
	int a[100005];
	int n,x;
	memset(a,0,sizeof(a));
	memset(ad,0,sizeof(ad));
	cin >> n;
	for(int i = 1 ; i <= n ; ++i){
		cin >> x;
		a[i] = x;
		ad[x]++;
	}
	x = a[1];
	int i = 0;
	bool flag = false;
	for(i = ad[x]+1 ; i <=n ; ++i)
		if(ad[a[i]] != ad[x]+1 and abs(ad[a[i]] - ad[x]+1) > 1){
			cout << ad[a[i]] << ' ' << ad[x]+1 << endl; 
			break;
		}
		else x = a[i];




	cout << i << endl;
	return 0;
}

