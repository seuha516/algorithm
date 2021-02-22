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

long long dap[102];

int main(){
	
	long long n; scanf("%lld",&n);

	dap[1]=1;
	dap[2]=2;
	dap[3]=3;
	dap[4]=4;
	dap[5]=5;
	dap[6]=6;
	dap[7]=9;
	
	for(int i=8;i<=100;i++){
		for(int j=1;j<=i-3;j++){
			dap[i]=max(dap[i],dap[j]*(i-j-1));
		}
	}
	
	printf("%lld",dap[n]);
	
	return 0;
}


