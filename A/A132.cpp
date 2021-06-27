#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    map<char,int> m;
    rep(i,s.size()){
        m[s[i]]++;
    }
    bool ok = false;
    if(m.size() == 2){
        for(auto i : m){
            if(i.second == 2) ok = true;
        }
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}