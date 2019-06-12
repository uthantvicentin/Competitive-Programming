#include <bits/stdc++.h>

using namespace std;

int main(){
	unsigned int n;
	cin >> n;
	int cont = 0;

	while(n != 0){
		if(n >= 100){
			n-=100;
			cont++;	
		}
		else if(n >=20){
			n-=20;
			cont++;	
		}
		else if(n >=10){
			n-=10;
			cont++;
		}
		else if(n >=5){
			n-=5;
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
