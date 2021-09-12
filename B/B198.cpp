#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    int n;
    cin >> n;
    string s = to_string(n);
    string rs = s;
    reverse(rs.begin(),rs.end());
    if(s == rs){
        cout << "Yes" << endl;
        return 0;
    }
    while(1){
        if(rs[0] != '0') break;
        if(s[s.size()-1] != '0') break;
        if(s[s.size()-1] == '0') s = s.erase(s.size()-1);
        int snum = atoi(s.c_str());
        int rsnum = atoi(rs.c_str());
        if(snum == rsnum){
            cout << "Yes" << endl;
            return 0;
        } 
    }
    cout << "No" << endl;
    return 0;
}