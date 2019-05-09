#include <bits/stdc++.h>

using namespace std;

int is_prime(int num){
	int i,primo = 0;
	if (num <= 1)
		return 0;
	if (num % 2 == 0 && num > 2)
		return 0;
	for(i = 3; i < sqrt(num)+1; i++){
		if(num % i == 0)
			primo++;
		if(primo >= 1)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	int a[10000];
	int x = 0;
	for(int i = 1 ; i <= n ; ++i)
		if(is_prime(i)){
			a[x++] = i;
		}
	for(int i = 0 ; i < x ; ++i)
		if(i < x-1)
			cout << a[i] << ' ';
		else
			cout << a[i] << '\n';
	return 0;
}

