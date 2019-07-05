#include <bits/stdc++.h>

using namespace std;

int main(){
	string str;
	int n;
	double k,soma = 0;
	int somakg = 0;
	cin >> n;
	
	 std::cout << std::fixed << std::showpoint;
    std::cout << std::setprecision(2);
	for(int i = 1 ; i <= n ; ++i){
		cin >> k;
		soma += k;
		cin.ignore();
		getline(cin,str);
		istringstream iss(str);
		vector<string> results((istream_iterator<string>(iss)),
				istream_iterator<string>());
		somakg += results.size();
		cout << "day " << i << ": " << results.size() << " kg\n";
	}
	cout << (double(somakg)/n) << " kg by day\n";
	cout << "R$ " << (soma/n) << " by day\n";		
	return 0;
}
