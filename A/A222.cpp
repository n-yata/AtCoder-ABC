#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int cnt = 4-s.size();
    string zero = "";
    rep(i,cnt){
        zero += "0";
    }
    cout << zero+s << endl;
    return 0;
}