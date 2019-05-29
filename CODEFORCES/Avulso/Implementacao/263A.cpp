#include <bits/stdc++.h>

using namespace std;

const int n = 5;
int main(){

	int m[n][n];
	int x,y;
	for(int i = 0 ; i < n ; ++i)
		for(int j = 0 ; j < n ; ++j){
			cin >> m[i][j];
			if(m[i][j] == 1){
				x = i;
				y = j;
			}
		}



	int ans = 0;

	if(x == 2 and y == 2){
		cout << 0 << endl;
		return 0;
	}

	else if(x == 2){
		if(y > 2)
			while(y != 2){
				ans++;
				y--;
			}
		else
			while(y!=2){
				ans++;
				y++;
			}
	}

	else if(y == 2){
		if(x > 2)
			while(x != 2){
				ans++;
				x--;
			}
		else
			while(x != 2){
				ans++;
				x++;
			}
	}

	else{
		if(y != 2){
			if(y > 2)
				while(y != 2){
					ans++;
					y--;
				}
			else
				while(y!=2){
					ans++;
					y++;
				}
		}
		if(x != 2){
			if(x > 2)
				while(x != 2){
					ans++;
					x--;
				}
			else
				while(x != 2){
					ans++;
					x++;
				}
		}
	}

	cout << ans << endl;


	return 0;
}
