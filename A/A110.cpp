#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    vector<int> a(3);
    rep(i,3) cin >> a[i];
    sort(a.rbegin(), a.rend());
    string s = to_string(a[0])+to_string(a[1]);
    int x = atoi(s.c_str());
    cout << x+a[2] << endl;
    return 0;
}