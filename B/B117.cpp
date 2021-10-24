#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
using ll = long long;

int main(){
	int n;
	cin >> n;
	vector<int> l(n);
	rep(i,0,n) cin >> l[i];
	sort(l.begin(),l.end());
	int x = l[l.size()-1];
	int y = 0;
	rep(i,0,n-1) y += l[i];
	if(x < y) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}