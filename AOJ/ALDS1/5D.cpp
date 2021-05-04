#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

const int N = 1e6+10;

int n;
int a[N], temp[N];

ll mergeSort(int q[], int l, int r){
    if(l == r) return 0;
    int mid = l+r >> 1;
    ll res = mergeSort(q, l, mid)+mergeSort(q, mid+1, r);
    int k = 0, i = l, j = mid+1;
    while(i <= mid && j <= r){
        if(q[i] <= q[j]) temp[k++] = q[i++];
        else{
            temp[k++] = q[j++];
            res += mid-i+1;
        }
    }
    while(i <= mid) temp[k++] = q[i++];
    while(j <= r) temp[k++] = q[j++];
    for(int i = l, j = 0; i <= r; i++, j++) q[i] = temp[j];
    return res;
}

int main(){
    scanf("%d", &n);
    rep(i,n) scanf("%d", &a[i]);
    cout << mergeSort(a, 0, n-1) << endl;
    return 0;
}