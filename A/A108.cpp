#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int k;
    cin >> k;
    vector<int> a, b;
    for(int i = 1; i <= k; i++){
        if(i%2 == 0) a.push_back(i);
        else b.push_back(i);
    }
    cout << a.size()*b.size() << endl;
    return 0;
}