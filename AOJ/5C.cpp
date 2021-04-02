#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

/* コッホ曲線 */
struct P{ double x, y;};

void k(int n, P a, P b){
    if(n == 0) return;
    P s, t, u;
    double th = PI*60.0/180.0;

    s.x = (2.0*a.x+1.0*b.x)/3.0;
    s.y = (2.0*a.y+1.0*b.y)/3.0;
    t.x = (1.0*a.x+2.0*b.x)/3.0;
    t.y = (1.0*a.y+2.0*b.y)/3.0;
    u.x = (t.x-s.x)*cos(th)-(t.y-s.y)*sin(th)+s.x;
    u.y = (t.x-s.x)*sin(th)+(t.y-s.y)*cos(th)+s.y;

    k(n-1, a, s);
    printf("%.8f %.8f\n", s.x, s.y);
    k(n-1, s, u);
    printf("%.8f %.8f\n", u.x, u.y);
    k(n-1, u, t);
    printf("%.8f %.8f\n", t.x, t.y);
    k(n-1, t, b);
}

int main(){
    P a, b;
    int n;
    scanf("%d", &n);
    a.x = 0;
    a.y = 0;
    b.x = 100;
    b.y = 0;
    printf("%.8f %.8f\n", a.x, a.y);
    k(n, a, b);
    printf("%.8f %.8f\n", b.x, b.y);
    return 0;
}