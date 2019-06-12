#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if((a+b) > c && (b+c) > a && (c+a) > b)
		cout << 0 << endl;

	else if((a+b) <= c){
		if((a+b) == c)
			cout << 1 << endl;
		else
			cout << abs(c-(a+b)+1) << endl;	
	}

	else if((b+c) <= a){
		if(b+c == a)
			cout << 1 << endl;
		else
			cout << abs((b+c)-a-1) << endl;	
	}

	else if((a+c) <= b){
		if(a+c == b)
			cout << 1 << endl;
		else
			cout << abs((a+c)-b-1) << endl;	
	}


	return 0;
}
