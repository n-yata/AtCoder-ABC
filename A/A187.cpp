#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string a, b;
    int sumA = 0;
    int sumB = 0;
    cin >> a >> b;
    for(char aa : a) sumA += aa-'0';
    for(char bb : b) sumB += bb-'0';
    if(sumA > sumB) cout << sumA << endl;
    else cout << sumB << endl;
    return 0;
}