#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define repn(i,num,n) for (int i = num; i < (n); ++i)
#define PI 3.14159265359
using ll = long long;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const ll INF = 1LL<<60;
const ll MOD = 1'000'000'007;

int main(){
	unsigned int i;
	unsigned char buf[1024]="";
	unsigned char*str_ptr=&buf[sizeof(buf)-1];

	cin >> i;

	while(i){
		*--str_ptr=i%16;
		if(10>*str_ptr){
			*str_ptr+=0x30;
		}else{
			*str_ptr+=(0x41-0x0A);
		}
		i/=16;
	}
    cout << setw(2) << setfill('0') << str_ptr << endl;
	return 0;
}