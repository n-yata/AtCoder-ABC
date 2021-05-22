#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

#define MAX 2000001
#define VMAX 10000

int main(){
    vector<int> a(MAX), b(MAX);
    int c[VMAX+1];
    int n;
    cin >> n;
    for(int i = 0; i <= VMAX; i++) c[i] = 0;
    for(int i = 0; i < n; i++){
        scanf("%hu", &a[i+1]);
        c[a[i+1]]++;
    }
    for(int i = 1; i <= VMAX; i++) c[i] = c[i]+c[i-1];
    for(int j = 1; j <= n; j++){
        b[c[a[j]]] = a[j];
        c[a[j]]--;
    }
    for(int i = 1; i <= n; i++){
        if(i > 1) printf(" ");
        printf("%d", b[i]);
    }
    printf("\n");
    return 0;
}