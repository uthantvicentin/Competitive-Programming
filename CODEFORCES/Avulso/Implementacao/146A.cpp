#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
	int n;
	string str;
	cin >> n >> str;
	bool flag = false;
	for(int i = 0 ; i < str.length(); ++i)
		if(str[i] != '4' && str[i] != '7'){
			flag = !flag;
			break;
		}
	if(flag)
		cout << "NO" << endl;
	else{
		int s1=0,s2=0;
		
		for(int i = 0 ; i < (int) str.length() /2 ; ++i)
			s1+= (int) str[i];
		
		for(int i = (int)str.length()/2 ; i < str.length() ; ++i)
			s2+=(int)str[i];

		if(s1 == s2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}	
	return 0;
}
