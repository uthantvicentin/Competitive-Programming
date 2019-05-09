#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(){
	int n;
	string a,b;
	cin >> n;
	while(n--){
		map <char, int> x,y;
		cin >> a >> b;
		if(a.size() == b.size()){
			for(int i = 0 ; i < a.length() ; ++i) x[a[i]]++;
			for(int i = 0 ; i < b.size() ; ++i) y[b[i]]++;
			auto it1 = x.begin();
			auto it2 = y.begin();
			bool flag = true;
			for( ; it1 != x.end(); ++it1, ++it2){
				if((*it1).first != (*it2).first){
					flag = !flag;
					break;
				}
				if((*it1).second != (*it2).second){
					flag = !flag;
					break;
				}
			}
		cout << (flag ? "YES" : "NO") << endl;
		}

		else
			cout << "NO" << endl;
	}

	return 0;
}

