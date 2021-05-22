#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

/* Secret Number */
int main(){
    string s;
    cin >> s;
    int ans = 0;
    // 暗証番号のパターン全探索
    rep(num, 10000){
        vector<int> a(10);
        int x = num;
        rep(i,4){
            int d = x%10; // 1桁取り出す
            a[d] = 1; // 取り出した値を格納
            x /= 10; // 1桁ずらす
        }
        bool ok = true;
        rep(i,10){
            if(s[i] == 'o' && a[i] != 1) ok = false;
            if(s[i] == 'x' && a[i] != 0) ok = false;
        }
        if(ok) ans++;
    }
    cout << ans << endl;
    return 0;
}