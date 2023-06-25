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
    int n,d;
    cin >> n >> d;
    vector<int> x(n),y(n);
    rep(i,n) cin >> x[i] >> y[i];
    bool graph[n][n];
    rep(i,n)rep(j,n) graph[i][j] = false;
    rep(i,n)rep(j,n) if((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]) <= d*d) graph[i][j] = true;
    vector<bool> ans(n);
    ans[0] = true;
    queue<int> que;
    que.push(0);
    while(!que.empty()){
        int q = que.front();
        que.pop();
        rep(i,n){
            if(graph[q][i] && !ans[i]){
                ans[i] = true;
                que.push(i);
            }
        }
    }
    rep(i,n) cout << (ans[i] ? "Yes" : "No") << endl;
    return 0;
}