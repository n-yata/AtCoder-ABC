#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

bool f(string s){
    if(s == "01") return true;
    if(s == "02") return true;
    if(s == "03") return true;
    if(s == "04") return true;
    if(s == "05") return true;
    if(s == "06") return true;
    if(s == "07") return true;
    if(s == "08") return true;
    if(s == "09") return true;
    if(s == "10") return true;
    if(s == "11") return true;
    if(s == "12") return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    string s1 = s.substr(0,2);
    string s2 = s.substr(2,2);
    if(f(s1) && f(s2)) cout << "AMBIGUOUS" << endl;
    else if(f(s1)) cout << "MMYY" << endl;
    else if(f(s2)) cout << "YYMM" << endl;
    else cout << "NA" << endl;
    return 0;
}