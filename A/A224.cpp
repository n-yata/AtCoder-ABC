#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    s = s.substr(s.size()-1);
    if(s == "r") cout << "er" << endl;
    else cout << "ist" << endl;
    return 0;
}