#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

/*

	 Segmente Tree - Interval Tree - Tournament Tree
	 Pega a recursão do merge-sort e transforma em uma estrutura.

 */


using namespace std;

#define AVN 400003
#define VTN 100002
int st[AVN];
int v[VTN];

void init(int i,int a,int b);
int valor(int a);
void update(int i, int a, int b, int y, int x);
int query(int index, int a, int b, int i, int j);

int main(){
	IOS;

	int n,q,a,b;
	string c;

	while(cin >> n >> q){

		for(int i = 0 ; i < n ; ++i)
			cin >> v[i];

		init(1,1,n);

		for(int i = 0 ; i < q ; ++i){
			cin >> c >> a >> b;	
			if(c[0] == 'P'){
				int answer = query(1, 1, n, a, b);
				cout << (answer == 1? '+' : (answer == 0? '0' : '-'));	

			}
			else
				update(1,1,n,a,b);	
		}

		cout << endl;

	}

	return 0;
}

int valor(int a){

	return (a > 0 ? 1: (a < 0 ? -1 : 0 ));

}

void init(int i , int a, int b){

	if(a == b)
		st[i] = valor(v[a -1]);

	else{
		int m = (a+b)/2;
		init(2*i,a,m);
		init(2*i+1,m+1,b);
		
		st[i] = st[i * 2] * st[i * 2 + 1];
	}
}


void update(int i, int a, int b, int y, int x){
	if (y > b || y < a) 
		return;

	if (a == b && b == y){
		st[i] = valor(x);
		return;
	}

	int m = (a + b) / 2;

	update(2 * i, a, m, y, x);

	update(2 * i + 1, m + 1, b, y , x);

	st[i] = st[i * 2] * st[i * 2 + 1];

}


int query(int i, int a, int b, int x, int y){
	if (x > b || y < a) return 1;

	if (a >= x && b <= y) return st[i];
	int m = (a + b) / 2;
	int x0 = query(i * 2, a, m, x, y);
	int x1 = query(i * 2 + 1, m + 1, b, x, y);

	return x1 * x0;

}


