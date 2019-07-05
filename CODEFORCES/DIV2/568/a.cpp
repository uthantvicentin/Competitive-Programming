#include <bits/stdc++.h>

using namespace std;

int main(){
	int d;
	int v[3];
	for(int i = 0 ; i < 3 ;++i)
		cin >> v[i];
	
	cin >> d;

	int ans = 0;
	sort(v,v+3);
	
	if((abs(v[0]-v[1])) < d)
	 ans += (d - abs(v[0]-v[1]));
	
	if((abs(v[1] - v[2])) < d)
		ans += (d - abs(v[1]-v[2]));

	 cout << ans << endl;
	 	
	return 0;
}
 
