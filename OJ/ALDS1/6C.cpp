#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int n;
vector<pair<char, int>> a(100000), b(100000);
int const INF = 1001001001;

int partition(int p, int r){
    int x = a[r].second;
    int i = p-1;
    for(int j = p; j < r; j++){
        if(a[j].second <= x){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quickSort(int p, int r){
    if(p < r){
        int q = partition(p, r);
        quickSort(p, q-1);
        quickSort(q+1, r);
    }
}

void merge(int l, int mid, int r){
    int n1 = mid-l;
    int n2 = r-mid;
    vector<pair<char, int>> L(n1+1), R(n2+1);
    rep(i,n1) L[i] = b[l+i];
    rep(i,n2) R[i] = b[mid+i];
    L[n1].second = INF;
    R[n2].second = INF;
    int i = 0, j = 0;
    for(int k = l; k < r; k++){
        if(L[i].second <= R[j].second){
            b[k] = L[i++];
        }else{
            b[k] = R[j++];
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
    int stable = 1;
    cin >> n;
    rep(i,n) cin >> a[i].first >> a[i].second;
    copy(a.begin(), a.end(), b.begin());
    quickSort(0,n-1);
    mergeSort(0, n);
    rep(i,n) if(a[i].first != b[i].first) stable = 0;
    if(stable) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    rep(i,n) cout << a[i].first << " " << a[i].second << endl;
    return 0;
}