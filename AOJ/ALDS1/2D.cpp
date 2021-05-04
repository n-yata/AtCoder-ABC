#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll cnt = 0;
int m;
vector<int> vg;

void show(int m, vector<int> &a){
    cout << m << endl;
    for(int i = m-1; i >= 0; --i){
        if(i != m-1) cout << " ";
        cout << vg[i];
    }
    cout << endl;
    cout << cnt << endl;
    for(auto aa : a){
        cout << aa << endl;
    }
}

void insertionSort(vector<int> &a, int n, int g){
    for(int i = g; i < n; ++i){
        int v = a[i];
        int j = i-g;
        while(j >= 0 && a[j] > v){
            a[j+g] = a[j];
            j -= g;
            cnt++;
        }
        a[j+g] = v;
    }
}

void shellSort(vector<int> &a, int n){
    for(int h = 1;;){
        if(h > n) break;
        vg.push_back(h);
        h = 3*h+1;
    }
    m = vg.size();
    for(int i = m-1; i >= 0; --i) insertionSort(a, n, vg[i]);
    show(m, a);
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    shellSort(a, n);
    return 0;
}