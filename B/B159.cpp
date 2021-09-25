#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    bool ok = true;
    string rs = s;
    reverse(rs.begin(), rs.end());
    if(s != rs) ok = false;
    int n = s.size();
    string ss = s.substr(0,(n-1)/2);
    string rss = rs.substr(0,(n-1)/2);
    reverse(rss.begin(), rss.end());
    if(ss != rss) ok = false;
    string ss2 = s.substr(((n+3)/2)-1,n);
    string rss2 = rs.substr(((n+3)/2)-1,n);
    reverse(rss2.begin(), rss2.end());
    if(ss2 != rss2) ok = false;
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}