#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    x -= 1;
    y -= 1;
    vector<string> s(h);
    rep(i,h) cin >> s[i];
    int ans = 0;
    for(int i = x-1; 0 <= i; i--){
        if(s[i][y] == '.') ans++;
        else break;
    }
    for(int i = x+1; i < h; i++){
        if(s[i][y] == '.') ans++;
        else break;
    }
    for(int j = y; 0 <= j; j--){
        if(s[x][j] == '.') ans++;
        else break;
    }
    for(int j = y+1; j < w; j++){
        if(s[x][j] == '.') ans++;
        else break;
    }
    cout << ans << endl;
    return 0;
}