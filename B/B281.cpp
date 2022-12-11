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
    string s;
    cin >> s;
    if(!isupper(s[0]) || !isupper(s[s.size()-1])){
        cout << "No" << '\n';
        return 0;
    }
    string n = s.substr(1,s.size()-2);
    if(n.size() != 6){
        cout << "No" << '\n';
        return 0;        
    }
    for(char c : n){
        if(!isdigit(c)){
            cout << "No" << '\n';
            return 0;
        }
    }
    int num = stoi(n);
    if(100000 <= num && num <= 999999) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}