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
    int n;
    cin >> n;
    map<int,vector<int>> mp;
    rep(i,n){
        int a,b;
        cin >> a >> b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    queue<int> que;
    que.push(1);
    set<int> st;
    st.insert(1);
    while(!que.empty()){
        int v = que.front();
        que.pop();
        for(int i : mp[v]){
            if(!st.count(i)){
                que.push(i);
                st.insert(i);
            }
        }
    }
    cout << *st.rbegin() << '\n';
    return 0;
}