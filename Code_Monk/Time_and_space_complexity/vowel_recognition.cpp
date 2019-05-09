#include <bits/stdc++.h>

using namespace std;

void findAns(string str){
	
	long long count=0;
	long long forDist=0;
	long long bacDist=0;
	
	for(int i=0 ; i < str.size() ; i++){
		
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
				str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){

			forDist = ( str.size() - i );
			bacDist = i + 1;
			count += bacDist * forDist;
		
		}
	
	}

	cout << count << endl;

}

int main(){
	
	int n;
	cin >> n;
	string str;
	
	for(int i = 0 ; i < n ; ++i){
		
		cin >> str;
		findAns(str);
	
	}
	
	return 0;

}
