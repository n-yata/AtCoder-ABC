#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;
using P = pair<int,int>;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int find(vector<string> a, string str){
    for(int i = 0; i < a.size(); i++){
        if(a[i] == str) return i;
    }
    return 0;
}

int main(){
    vector<string> a = {"A","B","C","D","E","F","G"};
    vector<int> b = {3,1,4,1,5,9};
    vector<string> p(2);
    rep(i,2) cin >> p[i];
    sort(p.begin(),p.end());
    bool start = false, end = false;
    int i1 = find(a,p[0]);
    int i2 = find(a,p[1]);
    int ans = 0;
    for(int i = i1; i < i2; i++){
        ans += b[i];
    }
    cout << ans << endl;
    return 0;
}