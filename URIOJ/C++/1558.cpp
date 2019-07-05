#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,i,j,ans;
	bool flag;

	while(cin >> n){
		flag = false;
		j = sqrt(n);
		i = 0;
		while(j >= i){
			ans = pow(i,2)+pow(j,2);
			if(ans == n){
				flag = true;
				break;
			}
			else if(ans < n)
				i++;
			else
				j--;		
		}
		if(flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}
