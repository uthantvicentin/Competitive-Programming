#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'

using namespace std;

int block[100][100];
int mat[105][105];

void recCima(int valor, int i, int j, int n);
void recBaixo(int valor, int i, int j, int n);
void recEsquerda(int valor, int i, int j, int n);
void recDireita(int valor, int i, int j, int n);

int main(){
	IOS

	int n, m, x, y, z;

	cin >> n >> m;

	memset(mat, 0, sizeof(mat));

	for(int i = 0; i < m; i++){
		cin >> x >> y >> z;
			
		memset(block, false, sizeof(block));
		if((x - 1) >= 0)
			recCima(z, x, y, n);
		if((x + 1) <= (n - 1))
			recBaixo(z, x, y, n);
		if((y - 1) >= 0)
			recEsquerda(z, x, y, n);
		if((y + 1) <= (n - 1))
			recDireita(z, x, y, n);
	}
	int maior = 0;
	int posi, posj;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << mat[i][j] << " ";
			if(mat[i][j] > maior){
				maior = mat[i][j];
				posi = i;
				posj = j;
			}	
		}
		cout << endl;
	}	
	cout << posi << " " << posj << endl;

	return 0;
}

void recCima(int valor, int i, int j, int n){
	if(valor == 0){
		cout << "i = " << i << " j = " << j << endl;
		if(!block[i][j]){
			mat[i][j]++;
			block[i][j] = true;	
		}
		return;	
	}

	if((i - 1) >= 0)
		recCima(valor - 1, i - 1, j, n);
	if((j - 1) >= 0)
		recEsquerda(valor - 1, i, j - 1, n);
	if((j + 1) <= (n - 1))
		recDireita(valor - 1, i, j + 1, n);			
}
void recBaixo(int valor, int i, int j, int n){
	if(valor == 0){
	cout << "i = " << i << " j = " << j << endl;
		if(!block[i][j])
			mat[i][j]++;
		block[i][j] = true;	
		return;	
	}

	if((j - 1) >= 0)
		recEsquerda(valor - 1, i, j - 1, n);
	if((i + 1) <= (n - 1))
		recBaixo(valor - 1, i + 1, j, n);
	if((j + 1) <= (n - 1))
		recDireita(valor - 1, i, j + 1, n);			
}
void recEsquerda(int valor, int i, int j, int n){
	cout << "i = " << i << " j = " << j << endl;
	if(valor == 0){
		if(!block[i][j])
			mat[i][j]++;
		block[i][j] = true;	
		return;	
	}

	if((i - 1) >= 0)
		recCima(valor - 1, i - 1, j, n);
	if((j - 1) >= 0)
		recEsquerda(valor - 1, i, j - 1, n);
	if((i + 1) <= (n - 1))
		recBaixo(valor - 1, i + 1, j, n);	
}
void recDireita(int valor, int i, int j, int n){
	if(valor == 0){
	cout << "i = " << i << " j = " << j << endl;
		if(!block[i][j])
			mat[i][j]++;
		block[i][j] = true;	
		return;	
	}

	if((i - 1) >= 0)
		recCima(valor - 1, i - 1, j, n);
	if((i + 1) <= (n - 1))
		recBaixo(valor - 1, i + 1, j, n);
	if((j + 1) <= (n - 1))
		recDireita(valor - 1, i, j + 1, n);			
}
