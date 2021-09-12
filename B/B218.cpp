#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int p;
    for(int i = 0; i < 26; i++){
        cin >> p;
        if(cin.fail()) break;
        printf("%c", 96+p);
    }
    cout << endl;
    return 0;
}