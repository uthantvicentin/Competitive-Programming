#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 1 ; i <= n ; ++i){
		int a,b,c,tmp;
		cin >> a >> b >> c;
		if(a > c)
			tmp = a, a = c,c = tmp;
		if(b > c)
			tmp = b, b = c, c = tmp;
		if(a > b)
			tmp = a, a = b, b = tmp;
		cout << "Case "<<i<<": " << b << endl;
	}

	return 0;
}
