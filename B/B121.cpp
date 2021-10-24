#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
using ll = long long;

int main(){
	int n,m,c;
	cin >> n >> m >> c;
	vector<int> b(m);
	rep(i,0,m) cin >> b[i];
	int a[n][m];
	rep(i,0,n)rep(j,0,m) cin >> a[i][j];
	int ans = 0;
	rep(i,0,n){
		int x = 0;
		rep(j,0,m){
			x += a[i][j]*b[j];
		}
		x += c;
		if(x > 0) ans++;
	}
	cout << ans << endl;
}