#include <bits/stdc++.h>

using namespace std;

int main(){
	string phrase;
	int n;
	cin >> n;
	while(n--){
		cin >> phrase;
		sort(phrase.begin(), phrase.end());
		do{
			cout << phrase << '\n';
		}while(next_permutation(phrase.begin(),phrase.end()));
		cout << '\n';
	}

	return 0;
}

