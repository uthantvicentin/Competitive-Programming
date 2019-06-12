#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;

	cin >> a >> b >> c;

	if(a == b and c != 0)
		cout << "?\n";	
	else if(a == b and c == 0)
		cout << "0\n";
	else if(a == b+c)
		cout << "?\n";
	else if(b == a+c)
		cout << "?\n";
	else if(a > b+c)
		cout << "+\n";
	else if(b > a+c)
		cout << "-\n";
	else
		cout << "?\n";
	return 0;
}
