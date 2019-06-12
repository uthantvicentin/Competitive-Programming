#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,h,x,cont = 0;
	cin >> n >> h;		
	for(int i = 0 ; i < n ; ++i){
		cin >> x;
		if(x > h)
			cont+=2;
		else
			cont++;
	}
	cout << cont << endl;


	return 0;
}
