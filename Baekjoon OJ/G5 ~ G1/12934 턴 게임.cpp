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

int main(){	
	
	long long x,y; scanf("%lld %lld",&x,&y); 
	long long n=sqrt(2*(x+y));
	
	if(n*(n+1)==(x+y)*2){
		long long bigo=0;
		long long dap=0;
		while(bigo<x){
			bigo+=(n-dap);
			dap++;			
		}
		printf("%d",dap);
		
	}else{
		printf("-1");
	}
	
	return 0;
}

