#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false);

using namespace std;

int main(){
	IOS;
	int sh,sm,eh,em,fh,fm,n,stotal,etotal;
	cin >> n;
	while(n--){
		cin >> sh >> sm >> eh >> em;
		stotal = sh*60;
		stotal+=sm;
		etotal = eh * 60;
		etotal += em;
		fh = abs(stotal - etotal);
		int resto = fh % 60;
		fh = fh/60;
		if(fh > 0)
			cout << fh <<' '<< resto << endl;
		else
			cout << "0 " << resto << endl; 
	}
	return 0;
}

