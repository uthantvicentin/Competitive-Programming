#include <bits/stdc++.h>

using namespace std;

int main(){
	int w,h,k;
	int res = 0;
	cin >> w >> h >> k;
	for(int i = 1 ; i <= k ; ++i)
		res += 2 * ((w - 4 * (i - 1)) + (h - 4 * (i - 1))) - 4;
	
	cout << res << endl;
	return 0;
}
