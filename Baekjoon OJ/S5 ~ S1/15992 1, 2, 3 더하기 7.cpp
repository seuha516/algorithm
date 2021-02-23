#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>

using namespace std;

long long jegop(long long tt){
	
	bool ok[50]={false,};
	int z=1000000007;
	int cnt=0;
	while(z){
		if(z%2==1){
			ok[cnt]=1;
		}
		z/=2; cnt++;
	}
	
	long long dap=1;
	
	for(int i=0;i<50;i++){
		if(ok[i]){
			dap*=tt;
			dap%=1000000009;
		}
		tt*=tt;
		tt%=1000000009;		
	}
	return dap%1000000009;
	
}

long long kk(int a,int b,int c){
	long long t=1;
	long long tt=1;
	long long ttt=1;
	for(int i=1;i<=a+b+c;i++){
		t*=i;
		t%=1000000009;
	}
	for(int i=1;i<=a;i++){
		tt*=i;
		tt%=1000000009;
	}
	for(int i=1;i<=b;i++){
		tt*=i;
		tt%=1000000009;
	}
	for(int i=1;i<=c;i++){
		tt*=i;
		tt%=1000000009;
	}
	ttt=jegop(tt);
		
	return (t*ttt)%1000000009;
}


int main(){
	
    int t; scanf("%d",&t);
    while(t--){
    	
    	int n,m; scanf("%d %d",&n,&m);
    	
    	long long dap=0;
    	
    	for(int i=0;i<=n;i++){
    		if(m-i<=n-3*i&&n-3*i<=2*(m-i)){
    			dap+=kk(2*m-n+i,n-m-2*i,i);
    			dap%=1000000009;
			}	
		}
    	printf("%lld\n",dap);
    	
	}  
  
    return 0;
}

