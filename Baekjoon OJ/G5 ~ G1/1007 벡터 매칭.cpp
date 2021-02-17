#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <stack>
#include <queue>
#include <utility>

using namespace std;


vector<long long> x,y;
long long dap=1<<63;
int n; 
long long hx,hy;

void go(){
	
	for(int i=0;i<(1<<n);i++){
		int I=i;
		if(__builtin_popcount(I)==n/2){
			int t=0; 
			long long tx=0,ty=0;
			while(I){
				if(I&1){
					tx+=x[t]; ty+=y[t];
				}
				I/=2;
				t++;
			}
			long long A=hx-tx-tx, B=hy-ty-ty;
			dap=min(dap,A*A+B*B);
		}
	}
	
	return;
}

int main(){
	
	int TC; scanf("%d",&TC); 
	while(TC--){
		x.clear(); y.clear(); dap=987654321987654321; hx=0; hy=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			long long a,b; scanf("%lld %lld",&a,&b);
			x.push_back(a);	y.push_back(b);
			hx+=a; hy+=b;
		}
		go();
		printf("%.10lf\n",sqrt((double)dap));
	}
	
	return 0;
}

