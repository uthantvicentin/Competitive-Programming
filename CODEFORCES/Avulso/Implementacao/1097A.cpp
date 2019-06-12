#include <bits/stdc++.h>

using namespace std;

int main(){
	string a,b;
	cin >> a;
	cin.ignore();
	getline(cin,b);
	bool flag = false;
	
	for(int i = 0 ; i < b.length() ; i+=3)
		if(b[i] == a[0]){
			flag = true;
			break;
		}

	if(!flag)
		for(int i = 1 ; i < b.length() ; i+=3)
			if(b[i] == a[1]){
				flag = true;
				break;
			}

		cout << (flag ? "YES" : "NO") << endl;

	return 0;
}
