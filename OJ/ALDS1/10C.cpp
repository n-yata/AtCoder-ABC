#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
const int N=1010;
char a[N],b[N];
int f[N][N];

int main() {
	int T;
	cin>>T;
	int g=T;
	int id=0;
	while(T--) {
		id++;
		memset(f,0,sizeof(f));
		cin>>a; 
		cin>>b; 
		int la=strlen(a);
		int lb=strlen(b);
		
		for(int i=0;i<la;i++) {
			for(int j=0;j<lb;j++) {
				if(a[i]==b[j]) {
					f[i+1][j+1]=f[i][j]+1;
				} else {
					f[i+1][j+1]=max(f[i][j+1],f[i+1][j]);
				}
			}
		}
		cout<<f[la][lb]<<endl;
	}
	return 0;
}
