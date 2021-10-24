#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> p(n);
	rep(i,0,n) cin >> p[i];
	sort(p.begin(),p.end());
	int x = p[p.size()-1]/2;
	p[p.size()-1] = x;
	int ans = 0;
	rep(i,0,n) ans += p[i];
	cout << ans << endl;
	return 0;
}