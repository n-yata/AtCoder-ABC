#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    pair<string, int> ac("AC", 0);
    pair<string, int> wa("WA", 0);
    pair<string, int> tle("TLE", 0);
    pair<string, int> re("RE", 0);
    rep(i,n){
        if(s[i] == "AC") ac.second++;
        if(s[i] == "WA") wa.second++;
        if(s[i] == "TLE") tle.second++;
        if(s[i] == "RE") re.second++;
    }
    cout << ac.first << " x " << ac.second << endl;
    cout << wa.first << " x " << wa.second << endl;
    cout << tle.first << " x " << tle.second << endl;
    cout << re.first << " x " << re.second << endl;
    return 0;
}