#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	stack <char> trem;
	char sai[2000],entra[1000],cr[1000];
	int n;
	while(cin >> n and n){
		for(int i=0;i<n;i++)
			cin >>entra[i];
		for(int i=0;i<n;i++)
			cin >> sai[i];
		cout << entra << sai;
		int j = 0;
		for(int i = 0 ; i < n ; ++i){
			trem.push(entra[i]);
			cout << "I";
			if(trem.top() == sai[j]){
				while(trem.top() == sai[j]){	
					trem.pop();
					cout << "R";
					j++;
					if(trem.empty())
						break;
				}
			}
		}

		j == n ? cout <<'\n' : cout << " Impossible\n";

		while(!trem.empty())
			trem.pop();	
	}
	return 0;
}
/*
	 4
	 e t d a
	 d a t e
	 5
	 o s t a p
	 p a t o s
	 0
 */
