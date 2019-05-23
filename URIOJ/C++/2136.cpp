#include <bits/stdc++.h>

using namespace std;

int main(){
	set <string> yes, no;
	set <string>::iterator it;
	string name,choice,friendhabay;
	int foh = 0;
	while(cin >> name and name.compare("FIM") != 0){
		cin >> choice;
		if(choice.compare("YES") == 0){
			if(name.size() > friendhabay.size())
				friendhabay = name;	
			yes.insert(name);
		}
		else no.insert(name);
	}

	it = yes.begin();
	for( ; it != yes .end() ; ++it) cout << *it << '\n';
	it = no.begin();
	for( ; it != no.end() ; ++it)	cout << *it << '\n';

	cout << '\n' << "Amigo do Habay:\n" << friendhabay << '\n';

	return 0;
}

