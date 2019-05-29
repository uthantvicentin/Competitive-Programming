#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,dx,dy,x,y;
	while(cin >> n and n){
	cin >> dx >> dy;	
	for(int i = 0 ; i < n ; ++i){
		cin >> x >> y;
		if(x == dx || y == dy)
			cout << "divisa\n";
		else if(x > dx && y > dy)
			cout << "NE\n";
		else if(x > dx && y < dy)
			cout << "SE\n";
		else if(x < dx && y < dy)
			cout << "SO\n";
		else
			cout << "NO\n";
		}	
	}


	return 0;
}
