#include <bits/stdc++.h>

using namespace std;

int main(){
	int x=0,y=0;
	string c;
	cin >> c;
	for(int i = 0 ; i < c.length(); ++i){
		if(c[i] == 'U') y++;
		else if(c[i] == 'D') y--;
		else if(c[i] == 'L') x--;
		else x++;
	}
	cout << x << ' ' << y << '\n';

	return 0;
}

