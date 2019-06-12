#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	int x,y;
	vector <pair<int,int> >v;
	cin >> n;
	for(int i = 0 ; i < n ; ++i){
		cin >> x >> y;
		v.push_back(make_pair(x,y));
	}
	cin >> k;
	int i = 0;
	auto it = v.begin();
	for(; it!= v.end() ; it++){
		if(k <= it->second)
			break;	
		i++;
	}

	cout << v.size() - i << endl;
	return 0;
}
