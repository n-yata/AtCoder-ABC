#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int search(vector<int> s, int n, int key){
    int left = 0, right = n;
    int mid;
    while(left < right){
        mid = (left+right)/2;
        if(s[mid] == key) return 1;
        else if(key < s[mid]) right = mid;
        else left = mid+1;
    }
    return 0;
}

int main(){
    int n, q, key;
    int ans = 0;
    cin >> n;
    vector<int> s(n);
    rep(i,n){
        cin >> s[i];
    }
    cin >> q;
    rep(i,q){
        cin >> key;
        if(search(s, n, key)) ans++;
    }
    cout << ans << endl;
    return 0;
}