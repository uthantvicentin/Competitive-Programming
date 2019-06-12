#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int na = 0,nb = 0, ra = 0 , rb = 0;
	while(n--){
		int x,y,z;
		cin >> x >> y >> z;
		if(x == 1){
			ra+= y;
			na+= z;
		}
		else{
			rb+=y;
			nb+=z;
		}
	}

	if(ra >= ((ra+na)/2))
		cout << "LIVE\n";
	else
		cout << "DEAD\n";

	if(rb >= ((rb+nb)/2))
		cout << "LIVE\n";
	else
		cout << "DEAD\n";

	return 0;
}
