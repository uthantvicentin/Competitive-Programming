#include <bits/stdc++.h>

using namespace std;

int main(){
	map <string,string> m;
	m.insert({"HELLO","ENGLISH"});
	m.insert({"HOLA","SPANISH"});
	m.insert({"HALLO","GERMAN"});
	m.insert({"BONJOUR","FRENCH"});
	m.insert({"CIAO","ITALIAN"});
	m.insert({"ZDRAVSTVUJTE","RUSSIAN"});
	string str;
	int i = 1;
	while(1){
		cin >> str;
		if(str.compare("#")==0)
			break;
		auto it = m.find(str);
		if(it != m.end())	
			cout << "Case " << i++ <<": " << m[str] << endl;	
		else
			cout << "Case " << i++ <<": " << "UNKNOWN" << endl;	
	}
	return 0;
}
