#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

string e[] = {"roraima","acre","amapa","amazonas","para","rondonia","tocantins"};
int main(){
	IOS;
	string str;
	cin >> str;
	for(int i = 0 ; i < 7 ; ++i)
		if(str == e[i]){
			cout << "Regiao Norte" << endl;
			return 0;
		}
		
	cout << "Outra regiao" << endl;

	return 0;
}

