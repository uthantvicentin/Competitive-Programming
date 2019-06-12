#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int cont = 0;
	while(n != 0){
		if(n >= 5){
			n-=5;
			cont++;	
		}
		else if(n >= 4){
			n-=4;
			cont++;
		}
		else if(n >= 3){
			n-=3;
			cont++;	
		}
		else if(n >= 2){
			n-=2;
			cont++;	
		}
		else{
			n--;
			cont++;
		}
	}
	cout << cont << endl;

	return 0;
}
