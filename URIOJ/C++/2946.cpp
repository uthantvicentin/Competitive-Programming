#include <bits/stdc++.h>

using namespace std; 

vector <int> vet;

void CheckDivisibility(string n,long k){  
	for(int i = 0 ; i < k ; ++i){
		long b;
		cin >> b;
	 	int s = 0;
    for(int j = 0 ; j < n.length(); j++){
         s *= 2;
         s += n[j]-'0';
				 s %= b;
      }
		
		if(!s) 
			vet.push_back(b);
	}

	if(vet.empty())
		cout << "Nenhum\n";
	else{
		sort(vet.begin(),vet.end());
		for(int i = 0 ; i < vet.size()-1 ; ++i)
			cout << vet[i] << ' ';
		cout << vet[vet.size()-1] << endl;
	}
} 

int main(){
	long k;
	string n;
	cin >> n >> k;
	CheckDivisibility(n,k); 
	return 0; 
} 


