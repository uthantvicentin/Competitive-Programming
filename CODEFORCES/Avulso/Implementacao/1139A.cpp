#include <bits/stdc++.h>

using namespace std;

int main(){
	int ans = 0;
	int n;
	cin >> n;
	string str;
	cin >> str;
	for(int i = 0 ; i < str.length() ; ++i)
		if((str[i] - '0') % 2 == 0)
			ans+=(i+1);

	cout << ans << endl;

	return 0;
}
