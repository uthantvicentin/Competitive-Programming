#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;

	if(b <= 2)
		cout << "nova\n";
	else if(b <= 96 and a <= b)
		cout << "crescente\n";
	else if(b >= 3 and b <= 96 and a > b)
		cout << "minguante\n";
	else
		cout << "cheia\n";
	return 0;
}
