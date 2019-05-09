#include <bits/stdc++.h>

using namespace std;

int main(){
	list <char> answer;
	list <char>::iterator it;
	string phrase;
	while(cin >> phrase){
		answer.clear();
		it = answer.begin();

		for(int i = 0 ; phrase[i] != '\0' ; ++i){
			if(phrase[i] == '[') it = answer.begin();
			else if(phrase[i] == ']') it = answer.end();
			else answer.insert(it,phrase[i]);
		}
		it = answer.begin();
		for( ; it != answer.end() ; ++it)
			cout << *it;
		cout << '\n';

	}

	return 0;
}

