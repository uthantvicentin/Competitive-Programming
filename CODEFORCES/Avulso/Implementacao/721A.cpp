#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string str;
	cin >> n;
	cin >> str;
	int cont = 0;
	vector <int> v;
	for(int i = 0 ; i < n ; ++i){
		if(str[i] == 'B')
			cont++;		
		else{
			if(cont != 0)
				v.push_back(cont);
			cont = 0;
		}
	}
	if(cont != 0)
		v.push_back(cont);

	if(v.empty())
		cout << 0 << endl;
	else{
		cout << v.size() << endl;
		for(int i = 0 ; i < v.size() ; ++i)
			cout << v[i] << ' ';
		cout << endl;
	}

	return 0;
}
