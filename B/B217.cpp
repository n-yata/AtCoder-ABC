#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main(){
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    set<string> set1;
    set1.insert(s1);
    set1.insert(s2);
    set1.insert(s3);
    set<string> set2;
    set2.insert("ABC");
    set2.insert("ARC");
    set2.insert("AGC");
    set2.insert("AHC");
    for(auto s : set2){
        if(set1.find(s) != set1.end()) continue;
        cout << s << endl;
    }
    return 0;
}