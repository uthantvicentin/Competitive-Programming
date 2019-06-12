#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <int> v(n);
	for(int i = 0 ; i < n ; ++i)
		cin >> v[i];
		sort(v.begin(),v.end());
	while(v.size() > 1){
		v.erase(v.begin()+v.size()-1);			
		if(v.size() == 1)
			break;		
		v.erase(v.begin()+0);
	}
	cout << v[0] << endl;
	
	return 0;
}
