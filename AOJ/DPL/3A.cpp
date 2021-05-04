#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
#define MAX 1400

int dp[MAX][MAX], G[MAX][MAX];

int getLargestSquare(int H, int W){
    int maxWidth = 0;
    rep(i,H)rep(j,W){
        dp[i][j] = (G[i][j]+1)%2;
        maxWidth |= dp[i][j];
    }
    for(int i = 1; i < H; i++){
        for(int j = 1; j < W; j++){
            if(G[i][j]){
                dp[i][j] = 0;
            }else{
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
                maxWidth = max(maxWidth, dp[i][j]);
            }
        }
    }
    return maxWidth*maxWidth;
}

int main(void){
    int H, W;
    scanf("%d %d", &H, &W);
    rep(i,H)rep(j,W) scanf("%d", &G[i][j]);
    printf("%d\n", getLargestSquare(H,W));
    return 0;
}