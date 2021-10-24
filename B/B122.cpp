#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
using ll = long long;

string S; int N;
string T = "ATCG";

int main(){
	cin >> S;
	N = S.length();
 
	int ans = 0;
	rep(L, 0, N) rep(R, L, N) {
		int ok = 1;
		rep(x, L, R + 1) if (T.find(S[x]) == string::npos) ok = 0;
		if (ok) chmax(ans, R - L + 1);
	}
	cout << ans << endl;
    return 0;
}