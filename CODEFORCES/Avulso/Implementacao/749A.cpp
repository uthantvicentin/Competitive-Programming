#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> v;
	while(n != 0){
		if(n & 1){
			n-=3;
			v.push_back(3);
		}
		else{
			n-=2;
			v.push_back(2);
		}
	}
	cout << v.size() << endl;
	for(int i = 0 ; i < v.size() ; ++i)
		cout << v[i] << ' ';
	cout << endl;
	return 0;
}
