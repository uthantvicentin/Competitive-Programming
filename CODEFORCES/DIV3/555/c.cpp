#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	int n;
	cin >> n;
	list <int> a;
	int last = 0;
	string ans;
	bool flag = false;
	for(int i = 0 ; i < n ; ++i){
		cin >> last;
		a.push_back(last);	
	}
	auto it = a.begin();
	last = 0;
	while(!a.empty()){
		
		if(a.front() < a.back()){
			
			if(a.front() > last){
				last = a.front();
				ans+= 'L';
				a.pop_front();
			}
			
			else if(a.back() > last){
				last = a.back();
				ans+='R';
				a.pop_back();
			}
			else
				break;
		
		}
		else{
			
			if(a.back() > last){
				last = a.back();
				ans+='R';
				a.pop_back();
			}
			
			else if(a.front() > last){
				last = a.front();
				ans+= 'L';
				a.pop_front();
			}
			else
				break;
		
		}
	
	}


	cout << ans.length() << endl << ans << endl;

	return 0;
}
