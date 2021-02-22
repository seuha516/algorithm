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

long long arr[100002];
long long hap;


int main(){
	
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",arr+i); hap+=arr[i];
	}
	long long dap=0;
	
	for(int i=1; i<=n; i++){
		dap+=arr[i]*(hap-arr[i]);
	}
	
	printf("%lld",dap/2);
	
	return 0;
	
}
