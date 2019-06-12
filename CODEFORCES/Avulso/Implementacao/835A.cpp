#include <bits/stdc++.h>

using namespace std;

int main(){
	int s,v1,v2,t1,t2;
	cin >> s >> v1 >> v2 >> t1 >> t2;

	int first = v1*s + t1*2;
	int second = v2*s + t2*2;

	if(first < second)
		cout << "First\n";
	else
		cout << (second < first ? "Second\n" : "Friendship\n");

	return 0;
}
