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
    vector<string> m = {"H","D","C","S"};
    vector<string> nm = {"A","2","3","4","5","6","7","8","9","T","J","Q","K"};
    vector<string> v;
    map<string,int> mp;
    rep(i,4)rep(j,13) v.push_back(m[i]+nm[j]);
    rep(i,n){
        string s;
        cin >> s;
        mp[s]++;
        if(find(v.begin(),v.end(),s) == v.end()){
            cout << "No" << endl;
            return 0;            
        }
        if(mp[s] > 1){
            cout << "No" << endl;
            return 0;           
        }
    }
    cout << "Yes" << endl;
    return 0;
}