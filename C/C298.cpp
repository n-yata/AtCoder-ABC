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

int main(){
    int n,q;
    cin >> n >> q;
    int x,i,j;
    map<int,vector<int>> b1;
    map<int,set<int>> b2;
    rep(a,q){
        cin >> x >> i;
        if(x == 1){
            cin >> j;
            b1[j].push_back(i);
            b2[i].insert(j);
        }else if(x == 2){
            vector<int> v = b1[i];
            sort(v.begin(),v.end());
            for(auto au : v) cout << au << " ";
            cout << endl;
        }else{
            set<int> s = b2[i];
            for(auto au : s) cout << au << " ";
            cout << endl;
        }
    }
    return 0;
}