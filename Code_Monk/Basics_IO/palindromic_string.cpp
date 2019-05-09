#include <bits/stdc++.h>

using namespace std;

int main(){
	stack <char> p;
	string palindrome;
	cin >> palindrome;
	for(int i = 0 ; i < palindrome.size() ; ++i) p.push(palindrome[i]);
	int i = 0;
	while(p.top() == palindrome[i++]){
		p.pop();
		if(p.empty())
			break;
	}	
	cout << ( !p.empty() ? "NO" : "YES") << '\n';
	return 0;
}

