#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int cnt = 0;
    rep(i,s.size()/2){
        if(s[i] != s[s.size()-1-i]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}