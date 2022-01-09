#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int N,M;
string A[101];
int win[101];
 
int battle(int round, int userA, int userB){
    char a = A[userA][round];
    char b = A[userB][round];
 
    if(a == b) return -1;
    if(a == 'G' && b == 'C') return userA;
    if(a == 'C' && b == 'P') return userA;
    if(a == 'P' && b == 'G') return userA;
 
    return userB;
}

int main(){
    cin >> N >> M;
    rep(i,N*2) cin >> A[i];
    vector<int> order;
    rep(i,N*2) order.push_back(i);
    rep(round,M){
        rep(k,N){
            int res = battle(round,order[k*2],order[k*2+1]);
            if(0 <= res) win[res]++;
        }
        sort(order.begin(),order.end(),[&](int a, int b){
            if(win[a] != win[b]) return win[a] > win[b];
            else return a < b;
        });
    }
    rep(i,N*2) cout << order[i]+1 << endl; 
    return 0;
}