#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    int x = 800*n;
    int y = 200*(n/15);
    cout << x-y << endl;
    return 0;
}