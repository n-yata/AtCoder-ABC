#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    s = s.replace(5, 1, " ");
    s = s.replace(13, 1, " ");
    cout << s << endl;
    return 0;
}