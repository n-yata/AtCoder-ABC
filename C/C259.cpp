#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

void rle(string s,vector<pair<char,int>> &vec){
    int cnt = 1;
    rep(i,1,s.size()){
        if(s[i] != s[i-1]){
            vec.push_back({s[i-1],cnt});
            cnt = 0;
        }
        cnt++;
    }
    vec.push_back({s.back(),cnt});
}

int main(){
    string s,t;
    cin >> s >> t;
    vector<pair<char,int>> svec,tvec;
    rle(s,svec),rle(t,tvec);

    if(svec.size() != tvec.size()){
        cout << "No" << endl;
        return 0;
    }

    bool ans = true;
    rep(i,0,svec.size()){
        if(svec[i].first != tvec[i].first) ans = false;
        if(!(svec[i].second == tvec[i].second || svec[i].second < tvec[i].second && svec[i].second >= 2)) ans = false;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}