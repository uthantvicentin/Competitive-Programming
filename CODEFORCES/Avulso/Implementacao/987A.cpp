#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	pair <string,int> x;
	map<string,pair<string,int>> v;

	x = make_pair("Power",0);
	v["purple"] = x;

	x = make_pair("Time",0);
	v["green"] = x;

	x = make_pair("Space",0);
	v["blue"] = x;

	x = make_pair("Soul",0);
	v["orange"] = x;

	x = make_pair("Reality",0);
	v["red"] = x;

	x = make_pair("Mind",0);
	v["yellow"] = x;



	cin >> n;
	string str;
	for(int i = 0 ; i < n ; ++i){
		cin >> str;
		v[str].second++;
	}

	vector<string> k;
	auto it = v.begin();
	for( ; it!= v.end() ; ++it)
		if(it->second.second == 0)
			k.push_back(it->second.first);

	cout << k.size() << endl;
	if(!k.empty()){
		for(int i = 0 ; i < k.size() ; ++i)
			cout << k[i] << endl;

	}




	return 0;
}
