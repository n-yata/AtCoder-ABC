#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    set<string> a;
    set<string> b;
    string s;
    rep(i,n){
        cin >> s;
        if(s[0] == '!') b.insert(s.substr(1));
        else a.insert(s);
    }
    for(auto value : a){
        if(b.count(value)){
            cout << value << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
    return 0;
}