#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int k,x;
    cin >> k >> x;
    int min = x-k+1;
    int max = x+k-1;
    for(int i = min; i <= max; i++){
        cout << i;
        if(i != max) cout << " ";
    }
    cout << endl;
    return 0;
}