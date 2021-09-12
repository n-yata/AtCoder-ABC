#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    string s;
    cin >> n >> s;
    rep(i,n){
        if(s[i] == '1'){
            if(i%2 == 0) cout << "Takahashi" << endl;
            else cout << "Aoki" << endl;
            break;
        }
    }
    return 0;
}