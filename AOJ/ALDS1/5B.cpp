#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

/* merge sort */
const int INF = 1001001001;
vector<int> s(500000);
int cnt;

void merge(int l, int mid, int r){
    int n1 = mid-l;
    int n2 = r-mid;
    vector<int> L(n1+1), R(n2+1);
    rep(i,n1) L[i] = s[l+i];
    rep(i,n2) R[i] = s[mid+i];
    L[n1] = INF;
    R[n2] = INF;
    int i = 0, j = 0;
    for(int k = l; k < r; k++){
        cnt++;
        if(L[i] <= R[j]){
            s[k] = L[i++];
        }else{
            s[k] = R[j++];
        }
    }
}

void mergeSort(int l, int r){
    if(l+1 < r){
        int mid = (l+r)/2;
        mergeSort(l, mid);
        mergeSort(mid, r);
        merge(l, mid, r);
    }
}

int main(){
    int n;
    cin >> n;
    rep(i,n) cin >> s[i];
    mergeSort(0, n);
    rep(i,n){
        if(i != 0) cout << " ";
        cout << s[i];
    } 
    cout << endl;
    cout << cnt << endl;
    return 0;
}