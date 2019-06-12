#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	set <int> tree;
	int k;
	vector <int> v;
	for(int i = 0 ; i < n *2 ; ++i){
		cin >> k;
		v.push_back(k);
		tree.insert(k);
	}
	if(tree.size() == 1)
		cout << "-1\n";
	else{
		sort(v.begin(),v.end());
		for(int i = 0 ; i < n*2 ; ++i)
			cout << v[i] << ' ';
		cout << endl;	
	}

	return 0;
}
