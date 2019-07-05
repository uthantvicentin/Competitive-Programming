#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string str;
	cin >> n;
	cin.ignore();
	while(n--){
		getline(cin,str);
		for(int i = 0; str[i] != '\0'; ++i)
			if(str[i] >= 65 && str[i] <= 90 ||  str[i] >= 97 && str[i] <= 122)
				str[i] += 3;

	
    for(int i = 0 ; i < str.length()/2 ; ++i)
        swap(str[i],str[str.length()-1-i]);

		for(int j = str.length()/2; str[j] != '\0'; j++)
			str[j]--;
		cout << str << endl;	

	}

	return 0;
}
