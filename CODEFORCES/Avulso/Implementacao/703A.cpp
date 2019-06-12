#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,x,y,m=0,c=0;
	cin >> n;	
	for(int i = 0 ; i < n ; ++i){
			cin >> x >> y;
		if(x > y)
			m++;
		else if(y > x)
			c++;
	}
	if(m > c)
		cout << "Mishka\n";
	else
		cout << (c > m ? "Chris\n" : "Friendship is magic!^^\n");

	return 0;
}
