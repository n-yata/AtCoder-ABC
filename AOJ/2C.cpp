#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

void print(vector<pair<char, int>> c, int n){
    rep(i,n){
        if(i > 0) cout << " ";
        cout << c[i].first << c[i].second;
    }
    cout << endl;
}

string comp(vector<pair<char, int>> a, vector<pair<char, int>> b, int n){
    rep(i,n){
        if(a[i].first == b[i].first && a[i].second == b[i].second) continue;
        return "Not stable";
    }
    return "Stable";
}

vector<pair<char, int>> bubbleSort(vector<pair<char, int>> c, int n){
    rep(i,n){
        for(int j = n-1; i < j; j--){
            if(c[j].second < c[j-1].second) swap(c[j], c[j-1]);
        }
    }
    print(c, n);
    return c;
}

vector<pair<char, int>> selectionSort(vector<pair<char, int>> c, int n){
    rep(i,n){
        int m = i;
        for(int j = i; j < n; ++j){
            if(c[j].second < c[m].second){
                m = j;
            }
        }
        swap(c[i], c[m]);
    }
    print(c, n);
    return c;
}

int main(){
    int n;
    cin >> n;
    vector<pair<char, int>> c(n);
    rep(i,n) cin >> c[i].first >> c[i].second;
    vector<pair<char, int>> a = bubbleSort(c, n);
    cout << "Stable" << endl;
    vector<pair<char, int>> b = selectionSort(c, n);
    cout << comp(a, b, n) << endl;
    return 0;
}