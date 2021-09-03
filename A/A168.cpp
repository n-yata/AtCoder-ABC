#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    char c = s[s.size()-1];
    if(c == '3') cout << "bon" << endl;
    else if(c == '0' || c == '1' || c == '6' || c == '8') cout << "pon" << endl;
    else cout << "hon" << endl;
    return 0;
}