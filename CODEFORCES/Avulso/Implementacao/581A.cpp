#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,y,ans;
	scanf("%d %d",&x,&y);
	if(x > y){
		ans = (x-y)/ 2;
		cout << y << ' ' << ans << endl;	
	}
	else if(y > x){
		ans = (y - x)/2;
		cout << x << ' ' << ans << endl;
		}
	else
		cout << x << ' ' << '0' << endl;

	return 0;
}
