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

int h,m;

void add(){
    m++;
    if(m >= 60){
        m = 0;
        h += 1;
        if(h >= 24) h = 0;
        return;
    }
}

bool solve(){
    string s1 = to_string(h);
    string s2 = to_string(m);
    if(s1.size() == 1) s1 = "0"+s1;
    if(s2.size() == 1) s2 = "0"+s2;
    char c1 = s1[1];
    char c2 = s2[0];
    s1[1] = c2;
    s2[0] = c1;
    int hh = stoi(s1);
    int mm = stoi(s2);
    if(23 < hh) return true;
    if(59 < mm) return true;
    return false;
}

int main(){
    cin >> h >> m;
    while(solve()) add();
    cout << h  << ' ' << m << '\n';
    return 0;
}