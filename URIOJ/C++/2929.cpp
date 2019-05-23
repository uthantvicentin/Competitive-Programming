#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){
	IOS;
	deque <int> stack,min;
	int n,num;
	cin >> n;
	string c;
	while(n--){
		cin >> c;
		if(c == "PUSH"){
			cin >> num;
			stack.push_back(num);
		}
		else if(c == "POP"){
			if(stack.empty())
				cout << "EMPTY" << endl;
			else stack.pop_back();
		}	
		else{
			if(stack.empty())
				cout << "EMPTY" << endl;
			else{
				int it = *min_element(stack.begin(),stack.end());
				cout << it << endl;
			}
		}	
	}

	return 0;
}

