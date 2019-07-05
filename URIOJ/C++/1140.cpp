#include <bits/stdc++.h>

using namespace std;

int main(){
	string ans;
	bool flag;
	while(1){
		getline(cin,ans);
		if(ans == "*")
			break;	
		flag = true;
		istringstream iss(ans);
		vector<string> results((istream_iterator<string>(iss)),
				istream_iterator<string>());
		char aux = results[0][0];
		aux = toupper(aux);
		for(int i = 1 ; i < results.size() ;++i)
			if(toupper(results[i][0]) != aux)
				flag = false;

		if(!flag)
			cout << "N\n";
		else
			cout << "Y\n";
	}
	return 0;
}
