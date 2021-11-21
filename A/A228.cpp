#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int s,t,x;
    cin >> s >> t >> x;
    while(1){
        if(s == x){
            cout << "Yes" << endl;
            return 0;
        }
        if(s == 23){
            s = 0;
            continue;
        }
        if(s == t-1){
            break;
        }
        s++;
    }
    cout << "No" << endl;
    return 0;
}