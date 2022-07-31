#include <bits/stdc++.h>
using namespace std;
#define rep(i,num,n) for (int i = num; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
    int  q;
    cin >> q;
    multiset<int> st;
    while(q--){
        int t;
        cin >> t;
        if(t == 1){
            int x; 
            cin >> x;
            st.insert(x);
        }else if(t == 2){
            int x,c;
            cin >> x >> c;
            while(c-- && st.find(x) != st.end()){
                st.erase(st.find(x));
            }
        }else{
            cout << *st.rbegin()-*st.begin() << endl;
        }
    }
    return 0;
}