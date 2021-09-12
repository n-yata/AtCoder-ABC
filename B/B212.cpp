#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s;
    cin >> s;
    bool weakC = true;
    bool weakN = true;
    for(int i = 0; i < 3; i++){
        if(s[i] != s[i+1]) weakC = false;
        if(((s[i]-'0')+1)%10 != ((s[i+1]-'0')%10)) weakN = false;
    }
    if(weakC || weakN) cout << "Weak" << endl;
    else cout << "Strong" << endl;
    return 0;
}