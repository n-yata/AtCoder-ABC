#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    n *= 1.08;
    if(206 > n) cout << "Yay!" << endl;
    else if(206 == n) cout << "so-so" << endl;
    else cout << ":(" << endl;
    return 0;
}