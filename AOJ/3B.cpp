#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

typedef struct pp{
    char name[100];
    int t;
} P;

const int MAX = 100005;
P que[MAX];
int head, tail;

void enqueue(P x){
    que[tail] = x;
    tail = (tail+1)%MAX;
}

P dequeue(){
    P x = que[head];
    head = (head+1)%MAX;
    return x;
}   

int main(){
    int n, q;
    cin >> n >> q;
    int time = 0; /* 経過時間 */
    rep(i,n){
        scanf("%s", que[i].name);
        scanf("%d", &que[i].t);
    }
    head = 0;
    tail = n;
    while(head != tail){
            P x = dequeue();
            int c = min(q, x.t);
            x.t -= c;
            time += c;
            if(x.t == 0) cout << x.name << " " << time << endl;
            else enqueue(x);
    }
    return 0;
}