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

int main(){
	
	long long arr[100005]={0,}; long long hap=0;
	long long n; scanf("%lld",&n);
	for(long long i=0;i<n;i++){
		scanf("%lld",arr+i);
		hap+=arr[i];
	}
	long long dap=0;
	
	for(long long i=0;i<n-1;i++){
		hap-=arr[i];
		dap+=arr[i]*hap;
	}
	printf("%lld",dap);
		
	return 0;
}




