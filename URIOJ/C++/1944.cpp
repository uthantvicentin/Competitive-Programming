#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	string str,d,aux = "FACE";
	int n,cont = 0;
	stack <char> f;
	for(int i = 0 ; i < 4 ; ++i) f.push(aux[i]);
	cin >> n;
	cin.ignore();
	for(int i = 0 ; i < n ; ++i){
		
		getline(cin,str);
		str.erase(remove(str.begin(), str.end(), ' '), str.end()); 
		
		for(int k = 0 ; k < 4 ; ++k) d+=f.top(), f.pop();
		
		if(d == str){
			cont++;
			if(f.empty()) for(int k = 0 ; k < 4 ; ++k) f.push(aux[k]);
		}
		
		else{
			
			for(int k = 3 ; k > -1  ; --k) 
				f.push(d[k]);
			for(int k = 0 ; k < 4 ; ++k)
				f.push(str[k]);	
		
		}

		d.clear();
	
	}

	cout << cont << endl;

	return 0;
}

