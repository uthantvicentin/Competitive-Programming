#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string str;
	cin >> str;
	int contsf = 0, contfs = 0;
	for(int i = 0 ; i < str.length()-1 ; ++i)
		if(str[i] == 'S' && str[i+1] == 'F')
			contsf++;
		else if(str[i] == 'F' and str[i+1] == 'S')
			contfs++;

		cout << (contsf > contfs ? "YES" : "NO") << endl;
	return 0;
}
