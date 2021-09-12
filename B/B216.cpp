#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<string> first(n);
    vector<string> last(n);
    rep(i,n) cin >> first[i] >> last[i];
    bool ok = false;
    for(int i = 0; i < n; i++){
        bool end = false;
        for(int j = i+1; j < n; j++){
            if(first[i] == first[j] && last[i] == last[j]){
                ok = true;
                end = true;
            }
        }
        if(end) break;
    }
    if(ok) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}