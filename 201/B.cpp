#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<pair<int, string>> t(n);
    rep(i,n) cin >> t[i].second >> t[i].first;
    sort(t.rbegin(), t.rend());
    cout << t[1].second << endl;
    return 0;
}