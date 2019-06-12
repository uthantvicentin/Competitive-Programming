#include <bits/stdc++.h>

using namespace std;


int main(){
	int n,m;
	cin >> n >> m;
	int arr[m+1],x,y;
	memset(arr,0,sizeof(arr));
	vector <int> v;
	for(int i = 0 ; i < n ; ++i){
		cin >> x >> y;
		for(int j = x ; j <=y ; ++j)
			arr[j]++;
	}

	for(int i = 1 ; i <= m ; ++i)
		if(arr[i] == 0)
			v.push_back(i);

	cout << v.size() << endl;
	if(!v.empty()){
		for(int i = 0 ; i < v.size() ; ++i)
			cout << v[i] << ' ';
	cout << endl;
	}
	return 0;
}
