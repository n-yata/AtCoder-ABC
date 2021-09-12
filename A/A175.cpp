#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int x(string s){
    if(s == "SSS") return 0;
    if(s == "SRS") return 1;
    if(s == "SSR") return 1;
    if(s == "SRR") return 2;
    if(s == "RSS") return 1;
    if(s == "RRS") return 2;
    if(s == "RSR") return 1;
    if(s == "RRR") return 3;
    return 0;
}

int main(){
    string s;
    cin >> s;
    cout << x(s) << endl;
    return 0;
}