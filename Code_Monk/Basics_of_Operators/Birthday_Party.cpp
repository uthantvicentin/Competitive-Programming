#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n,a,b;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		cout << (b%a == 0? "Yes" : "No") << endl;
	}

	return 0;
}

