#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int l,r;
	string str;
	char c1,c2;
	cin >> str;
	while(m--){
		cin >> l >> r >> c1 >> c2;
		for(int i = l-1 ; i < r ; ++i)
			if(str[i] == c1)
				str[i] = c2;	
	}	

	cout << str << endl;

	return 0;
}
