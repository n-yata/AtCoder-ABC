#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n, x;
    string s;
    cin >> n >> x >> s;

    for(char c : s){
        if(c == 'o') x++;
        if(c == 'x' && x != 0) x--;
    }

    cout << x << endl;
    return 0;
}