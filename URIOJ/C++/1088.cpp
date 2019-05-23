#include <bits/stdc++.h>

using namespace std;

vector <int> v;
int cont;

vector <int> Merge(vector <int> A, vector <int> B){
	int i = 0, j = 0; 
	int LL = A.size(), RR = B.size();
	vector <int> final;

	while(i  < LL && j < RR){
		if(A[i] < B[j]){
			final.push_back(A[i]);
			i++;
		}
		else{
			final.push_back(B[j]);
			cont += (int)(A.size()) - i;
			j++;
		}
	}

	while( i < LL){
		final.push_back(A[i]); 
		i++;
	}

	while(j < RR){
		final.push_back(B[j]); 
		j++;
	}
	return final;
}

vector <int> MergeSort(int left, int right){
	vector <int> r;
	int middle = (left + right)/2;

	if(left + 1 >= right){
		r.push_back(v[left]);
		return r;
	}

	vector <int> a = MergeSort(left, middle);
	vector <int> b = MergeSort(middle, right);
	r = Merge(a,b);

	return r;
}

int main (){
	int n, x;

	while(cin >> n and n){
		cont = 0; 
		v.clear();
	for(int i = 0 ; i < n ; i++){
		cin >> x; 
		v.push_back(x);
	}

	MergeSort(0,n);

	if(cont%2) 
		cout << "Marcelo" << '\n';
	else
		cout << "Carlos"<<'\n';
	}

	return 0;
}
