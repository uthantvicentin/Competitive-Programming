#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int vet[150];
	int vetb[150];
	cin >> n;
	string a,b;	
	while(n--){
		cin >> a >> b;
		
		bool flag = false;
		
		int i = 0, j = 0;
		for( ;i < a.length() && j < b.length() ; ++i){
			if(a[i]!= b[j]){
				flag = true;
				break;
			}
			if(a[i] == a[i+1]){
				j++;
				continue;
			}
			while(b[j] == a[i] and j < b.length())
				j++;
		}
		if(i < a.length() or j < b.length())
			flag = true;

		if(flag)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;

}
