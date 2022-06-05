#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int h,w;
    cin >> h >> w;
    vector<pair<int,int>> pieces;
    rep(i,0,h)rep(j,0,w){
        char c;
        cin >> c;
        if(c == 'o'){
            pieces.emplace_back(i,j);
        }
    }
    int a = pieces[0].first;
    int b = pieces[0].second;
    int c = pieces[1].first;
    int d = pieces[1].second;
    cout << abs(a-c) + abs(b-d) << endl;
    return 0;
}