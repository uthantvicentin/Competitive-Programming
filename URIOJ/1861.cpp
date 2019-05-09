#include <bits/stdc++.h>

using namespace std;

typedef map <string,int> mapa;
int main(){
	mapa k,m;
	string killer,killed;
	while(cin >> killer >> killed){
		k[killer]++;
		m[killed]++;
	}
	cout << "HALL OF MURDERERS\n";
	mapa::iterator i = k.begin();
	for( ; i != k.end() ; ++i){
		if(!m[(*i).first])
			cout << (*i).first << ' ' << (*i).second << '\n';

	}
	return 0;
}

