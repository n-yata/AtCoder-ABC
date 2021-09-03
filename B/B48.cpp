#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    ll a,b,x;
    cin>>a>>b>>x;
    ll acnt, bcnt;
    if(a == 0){
        acnt = 0;
        bcnt = b/x+1;
    }else{
        acnt = (a-1)/x;
        bcnt = b/x;
    }
    cout << bcnt-acnt << endl;
    return 0;
}