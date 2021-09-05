#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int x,y;
    int p = s.find(".");
    x = stoi(s.substr(0, p));
    y = stoi(s.substr(s.size()-1));
    if(0 <= y && y <= 2) cout << x << "-" << endl;
    else if(3 <= y && y <= 6) cout << x  << endl;
    else cout << x << "+" << endl;
    return 0;
}