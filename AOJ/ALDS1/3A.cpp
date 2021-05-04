#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

const int MAX = 1000;
int top;
int st[MAX];

void push(int x){
    st[++top] = x;
}

int pop(){
    top--;
    return st[top+1];
}

int main(){
    int a, b;
    top = 0;
    char s[100];
    while(scanf("%s", s) != EOF){
        if(s[0] == '+'){
            a = pop();
            b = pop();
            push(a+b);
        }else if(s[0] == '-'){
            b = pop();
            a = pop();
            push(a-b);
        }else if(s[0] == '*'){
            a = pop();
            b = pop();
            push(a*b);
        }else{
            push(atoi(s));
        }
    }
    cout << pop() << endl;
   return 0;
}