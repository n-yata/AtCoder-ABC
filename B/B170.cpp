#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int x,y;
    cin >> x >> y;
    for(int i = 0; i <= x; i++){
        int t = i;
        int b = x-i;
        int sumf = t*4+b*2;
        if(sumf == y){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}