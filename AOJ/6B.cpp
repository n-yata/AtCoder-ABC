#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

/* partition */
int n;
vector<int> a(100000);

int partition(int p, int r){
    int x = a[r];
    int i = p-1;
    for(int j = p; j < r; j++){
        if(a[j] <= x){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

int main(){
    cin >> n;
    rep(i,n) cin >> a[i];
    int q = partition(0, n-1);
    rep(i,n){
        if(i) cout << " ";
        if(i == q) cout << "[";
        cout << a[i];
        if(i == q) cout << "]";
    }
    cout << endl;
    return 0;
}