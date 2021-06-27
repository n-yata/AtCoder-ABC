#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    string ans;
    if(s == "Sunny") ans = "Cloudy";
    else if(s == "Cloudy") ans = "Rainy";
    else ans = "Sunny";
    cout << ans << endl;
    return 0;
}