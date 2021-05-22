#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

const int inf = 0x3f3f3f3f;
const int maxn = 1005;
const int maxw = 10005;

int a[maxn], b[maxn];
int Index[maxw];
bool vis[maxw];


int main() {
	int n; scanf("%d", &n);

	int min_w = inf;
	for (int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		b[i] = a[i];
		min_w = min(min_w, a[i]);
	}
	sort(b, b + n);

	for (int i = 0; i < n; ++i) Index[b[i]] = i;

	int res = 0;
	for (int i = 0; i < n; ++i) {
		if (vis[i]) continue;

		int cnt = 0, sum = 0;
		int cur = i;
		int minm = inf;

		while (true) {
			if (vis[cur]) break;
			int x = a[cur];
			++cnt; sum += x;
			minm = min(minm, x);
			vis[cur] = true;
			cur = Index[x];
		}

		res += min(sum + (cnt - 2) * minm, sum + minm + (cnt + 1) * min_w);
	}
	printf("%d\n", res);
	return 0;
}