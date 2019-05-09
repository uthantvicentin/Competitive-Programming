#include <bits/stdc++.h>
#define endl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;
const int x = 100000;

int l[4*x+1],h[4*x+1],delta[4*x+1],mi[4*x+1];

void init(int i,int a,int b);
void increment(int i, int a, int b, int val);
void prop(int i);
void update(int  i);
int minimum(int i, int a, int b);


int main(){
	IOS;
	int n;
	cin >> n;	
	init(1, 0,n-1);

	return 0;
}

void init(int i , int a, int b){
	l[i] = a;
	h[i] = b;
	
	if(a == b)
		return;
	
	int m = (a+b)/2;
	init(2*1,a,m);
	init(2*1+1,m+1,b);

}

void prop(int i){

	delta[2*i] += delta[i];
	delta[2*i+1] += delta[i];
	delta[i] = 0;

}
void update(int i){

	mi[i] = min(mi[2*i] + delta[2*i], mi[2*i+1] + delta[2*i+1]);

}

void increment(int i, int a, int b,int val){

	if(b < l[i] or a > h[i])
		return;

	if(a <= l[i]  and h[i] <= b){
		delta[i] += val;
		return;
	}
	
	prop(i);
	
	increment(2*i,a,b,val);
	increment(2*i+1,a,b,val);
	
	update(i);

}

int minimum(int i, int a,int b){
	
	if(l[i] < b or a > h[i])
		return INT_MAX;	
	
	if(a <= l[i] and b >= h[i])
		return mi[i]+ delta[i];
	
	prop(i);
	int minLeft = minimum(2*i,a,b);	
	int minRight = minimum(2*i+1,a,b);		
	update(i);
	return min(minLeft,minRight);
}
