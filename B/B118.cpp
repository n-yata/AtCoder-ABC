#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
using ll = long long;

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> v(m);
	rep(i,0,m) v[i] = 0;
	rep(i,0,n){
		int k; cin >> k;
		rep(j,0,k){
			int a; cin >> a;
			v[a-1]++;
		}
	}
	int ans = 0;
	rep(i,0,m) if(v[i] == n) ans++;
	cout << ans << endl;
}