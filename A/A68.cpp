#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    stringstream ss;
    ss << setw(3) << setfill('0') << n;
    cout << "ABC" << ss.str() << endl;
    return 0;
}