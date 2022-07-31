#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

int main(){
    string s;
    cin >> s;
    vector<bool> fl(10,false);
    rep(i,9) fl[s[i]-'0'] = true;
    rep(i,10) if(!fl[i]) cout << i << endl;
    return 0;
}