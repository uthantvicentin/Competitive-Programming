#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str;
	while(n--){
		cin >> str;
		if(str == "1" or str == "4" or str == "78")
			cout << "+\n";
		else if(str[str.length()-1] == '5' and str[str.length()-2] == '3')
			cout << "-\n";
		else if(str[0] == '9' and str[str.length()-1] == '4')
			cout << "*\n";
		else
			cout << "?\n";
	}	
	return 0;
}
