#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

bool eprime[1000005];
int prime[1000005];
int a,b;

void crivo(){	
	eprime[1] == 1;
	for(int i = 2 ; i<=b ;++i){
		if(!eprime[i]){
			for(int j = 2 ; j*i <= b ; ++j)
				eprime[i*j] = 1;
		}
	}
}

int main(){
	IOS;
	char u[2];
	cin >> a >> b;
	crivo();
	for(int i = a ; i <= b ; ++i){
		if(i >= a and i <= b and eprime[i] == 0){
			string a = to_string(i);
			int sum = 0;
			for(int x = 0 ; x < a.size() ; ++x){
				u[0] = a[x];
				int y = stoi(u);
				sum+=y;
			}
			if(eprime[sum] == 0)
				cout << i << ' ';
		}
	}
	cout << endl;

	return 0;
}

