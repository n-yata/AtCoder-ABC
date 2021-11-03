#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    pair<string, int> one, two;
    if(c == 0){
        one.first = "Takahashi";
        one.second = a;
        two.first = "Aoki";
        two.second = b;
    } else{
        one.first = "Aoki";
        one.second = b;
        two.first = "Takahashi";
        two.second = a;
    }
    while(1){
        one.second--;
        if(one.second == 0){
            cout << two.first << endl;
            return 0;
        }
        two.second--;
        if(two.second == 0){
            cout << one.first << endl;
            return 0;
        }
    }
    return 0;
}