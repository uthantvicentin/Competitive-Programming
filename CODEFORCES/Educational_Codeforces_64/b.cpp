#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	string x,aux;
	int n,i = 0;
	cin >> n;
	int y = n;
	bool flag = false;
	while(y--){
		cin >> x;
		aux = x;
		int cont = 0;
		random_shuffle(x.begin(),x.end());
		cout << x << ' ' << aux << endl; 
	/*
		for(int i = 0 ; i < x.length()  ; i++)
			for(int j = i+1 ; j < x.length() ; j++){
				if(int(x[i])+1 != int(x[j])){
					swap(x[i],x[j]);	
				}
			}

		for(int i = 0 ; i < x.length() ; ++i){
			if(int(x[i])+1 == int(x[i+1])){	
				cout << x[i] << ' ' << x[i+1];
				flag = true;
				break;
			}
			else if(int(x[i]-1) == int(x[i+1])){
				cout << x[i] << ' ' << x[i+1];
				flag = true;
				break;
			}
		}
	cout << x << ' ' << aux << endl; 

		if(flag)
			cout << "No answer\n";
		else if(x == aux)
			cout << x << endl;
		else
			cout << x << endl;
	*/
	}
	return 0;
}

