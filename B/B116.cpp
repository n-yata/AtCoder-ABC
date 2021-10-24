#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
using ll = long long;

int f(int n){
	if(n%2 == 0) return n/2;
	else return 3*n+1;
}

int main(){
	int s;
	cin >> s;
	vector<int> a;
	a.push_back(s);
	int ans = 1;
	while(1){
		ans++;
		int x = f(s);
		auto res = find(a.begin(),a.end(),x);
		if(res != a.end()){
			cout << ans << endl;
			return 0;
		}
		s = x;
		a.push_back(x);
	}
	return 0;
}