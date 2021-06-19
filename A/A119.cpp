#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    int month = atoi(s.substr(5,2).c_str());
    int day = atoi(s.substr(8,2).c_str());
    if(month > 4) cout << "TBD" << endl;
    else if(month == 4 && day > 30) cout << "TBD" << endl;
    else cout << "Heisei" << endl;
    return 0;
}