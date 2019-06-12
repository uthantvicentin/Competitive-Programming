#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	string str;
	cin >> str;
	int a = 0, d = 0;
	for(int i = 0 ; i < str.length() ; ++i){
		if(str[i] == 'A')
			a++;
		else
			d++;
	}

	if(a > d)
		cout << "Anton\n";
	else
		cout << (d > a ? "Danik\n" : "Friendship\n");
	
	return 0;
}
