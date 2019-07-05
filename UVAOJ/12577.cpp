#include <bits/stdc++.h>

using namespace std;

int main(){
	string str,ans;
	int i = 1;
	while(1){
		cin >> str;
		if(!str.compare("*"))
			break;

		if(!str.compare("Hajj"))	
			ans = "Hajj-e-Akbar";
		else
			ans = "Hajj-e-Asghar";

		cout << "Case " << i++ <<": " << ans << endl;

	}

	return 0;
}
