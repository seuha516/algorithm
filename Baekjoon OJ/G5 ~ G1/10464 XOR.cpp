#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int min(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}	
}

int main() {
	
	int t;scanf("%d",&t);
	
	while(t--){
		int a,b; scanf("%d %d",&a,&b); int dap=0;
		for(int i=30;i>=1;i--){
			dap*=2;
			int x=1<<i; int y=x/2;
			int t1=0,t2=0;
			t1=((b+1)/x)*y + max(0,(((b+1)%x)-y));
			t2=((a)/x)*y + max(0,(((a)%x)-y));
			int res=t1-t2;
			dap+=(t1-t2)%2;	
		}
		printf("%d\n",dap);
	}
	
	return 0;
}
