#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define MAX 1400

struct Rectangle{ int height; int pos;};

int getLargestRectangle(int size, int buffer[]){
    stack<Rectangle> S;
    int maxv = 0;
    buffer[size] = 0;
    rep(i, size+1){
        Rectangle rect;
        rect.height = buffer[i];
        rect.pos = i;
        if(S.empty()){
            S.push(rect);
        }else{
            if(S.top().height < rect.height){
                S.push(rect);
            }else if(S.top().height > rect.height){
                int target = i;
                while(!S.empty() && S.top().height >= rect.height){
                    Rectangle pre = S.top();
                    S.pop();
                    int area = pre.height*(i-pre.pos);
                    maxv = max(maxv, area);
                    target = pre.pos;
                }
                rect.pos = target;
                S.push(rect);
            }
        }
    }
    return maxv;
}

int H, W;
int buffer[MAX][MAX];
int T[MAX][MAX];

int getLargestRectangle(){
    rep(j,W)rep(i,H){
        if(buffer[i][j]){
            T[i][j] = 0;
        }else{
            T[i][j] = (i > 0) ? T[i-1][j]+1 : 1;
        }
    }
    int maxv = 0;
    rep(i,H) maxv = max(maxv, getLargestRectangle(W, T[i]));
    return maxv;
}

int main(){
    scanf("%d %d", &H, &W);
    rep(i,H)rep(j,W) scanf("%d", &buffer[i][j]);
    cout << getLargestRectangle() << endl;
    return 0;
}