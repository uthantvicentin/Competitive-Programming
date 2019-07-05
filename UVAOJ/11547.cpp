#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
	int x;
	cin >> x;
	long long y = ((((((x*567)/9)+7492)*235)/47)-498);
	string str = to_string(y);
	cout << str[str.length()-2] << endl;	
	}
	
	return 0;
}
