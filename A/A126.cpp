#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, k;
    string s;
    cin >> n >> k >> s;
    s[k-1] = tolower(s[k-1]);
    cout << s << endl;
    return 0;
}