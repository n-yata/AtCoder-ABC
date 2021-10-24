#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
using ll = long long;

int main(){
	int n;
	cin >> n;
	double x;
	string s;
	double ans = 0;
	rep(i,0,n){
		cin >> x >> s;
		if(s == "JPY") ans += x;
		else ans += 380000*x;
	}
	printf("%.10f\n",ans);
}