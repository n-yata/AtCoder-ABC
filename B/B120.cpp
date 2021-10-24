#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
using ll = long long;

int main(){
	int a,b,k;
	cin >> a >> b >> k;
	vector<int> x;
	for(int i = 100; 0 < i; i--){
		if(a%i == 0 && b%i == 0) x.push_back(i);
	}
	cout << x[k-1] << endl;
}