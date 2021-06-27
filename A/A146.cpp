#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    if(s == "SUN") ans = 7;
    else if(s == "MON") ans = 6;
    else if(s == "TUE") ans = 5;
    else if(s == "WED") ans = 4;
    else if(s == "THU") ans = 3;
    else if(s == "FRI") ans = 2;
    else ans = 1;
    cout << ans << endl;
    return 0;
}