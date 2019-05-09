#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n;
	cin >> n;
	string str;
	cin >> str;
	bool flag = false;
	int f[9];
	for(int i = 1 ; i <= 9 ; ++i) cin >>f[i];
	
	for(int i = 0; i < n; i++){
		int number = int(str[i] - 48);
		
		if(f[number] > number){
			flag = true;
			str[i] = (f[number] + 48);
		}
		else if(flag and f[number] == number)
			str[i] = (f[number]+48);	
		
		else if(flag)
			break;
	}

	cout << str << '\n';
	return 0;
}
