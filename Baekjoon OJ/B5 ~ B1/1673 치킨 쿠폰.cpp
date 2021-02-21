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

using namespace std;

int main() {
	
	while(1){
		int n,k; 
		if(scanf("%d %d",&n,&k)==-1){
			break;
		}
		
		int dap=0;
		int coupon=n;
		int dojang=0;
		
		while(1){
			if(coupon==0) break;
			dap+=coupon; dojang+=coupon; coupon=0; 
			coupon+=dojang/k; 
			dojang=dojang%k; 
		}
		printf("%d\n",dap);
	}
	
	return 0;
}
