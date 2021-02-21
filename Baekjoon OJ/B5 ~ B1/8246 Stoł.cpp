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
#include <functional>
#include <stack>
using namespace std;

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	long long a,b,k; scanf("%lld %lld %lld",&a,&b,&k);
	int dap=0;
	if(a<b)swap(a,b);
	
	if(a<k){
		printf("%lld",dap); return 0;
	}
	dap+=b/k;
	a=max(0,a-k);
	if(a<k){
		printf("%lld",dap); return 0;
	}
	dap+=b/k;
	a=max(0,a-k);
	
	if(b<k){
		printf("%lld",dap); return 0;	
	}else if(b<k+k){
		printf("%lld",dap+a/k); return 0;
	}else{
		printf("%lld",dap+a/k+a/k); return 0;
	}
	
	
return 0;}





