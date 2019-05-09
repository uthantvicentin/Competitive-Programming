#include <bits/stdc++.h>

using namespace std;

int main(){
	char letter;
	set <string> dictionary;
	string word;
	while(cin.get(letter)){
		if(isalpha(letter)) word+=tolower(letter);
		else{
			dictionary.insert(word);
			word.clear();	
		}
	}
	if(!word.empty())
		dictionary.insert(word);
	for(set<string>::iterator i = dictionary.begin() ; i != dictionary.end() ; ++i){
		if(i == dictionary.begin())
			continue;
		cout << *i << '\n';
	
	}


	return 0;
}

