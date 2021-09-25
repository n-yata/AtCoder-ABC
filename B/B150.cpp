#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            if(i+1 > n) break;
            if(s[i+1] == 'B'){
                if(i+2 > n) break;
                if(s[i+2] == 'C'){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}