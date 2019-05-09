#include <bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//ifstream fin("fila.in");
	//ofstream fout("fila.out");
	
	vector <int> A;
	int n,x,t,i;
	bool flag = false;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> x; A.push_back(x);
	}
	cin >> n;
	while(n--){
		cin >> t >> i >> x;
		if(t == 0){
			auto it = A.begin();
			A.insert(it + i , x);
		}
		else{
			flag = false;
			int y,soma = A[i-1] + x;
			for( y = i - 1 ; y > -1 ; y--){
				if(A[y] > soma){
					flag = true;
					break;	
				}
			}
			flag == false ? cout << "0\n" : cout << ++y << '\n';
		}



	}
	return 0;
}

