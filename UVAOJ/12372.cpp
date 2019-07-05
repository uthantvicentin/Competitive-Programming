#include <bits/stdc++.h>

using namespace std;

int main(){
	int k = 1;
	int n;
	cin >> n;
	string ans;
	while(n--){
		int a,b,c;
		cin >> a >> b >> c;
		if(a <= 20 and b <= 20 and c <= 20)
			ans = "good";
		else
			ans = "bad";
		cout << "Case " << k++ <<	": " << ans << endl;

	}

	return 0;
}
