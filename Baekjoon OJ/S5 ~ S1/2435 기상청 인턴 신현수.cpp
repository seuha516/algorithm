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

using namespace std;

int main(){
	int arr[1000]={0,};
	int n,k; scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	int dap=-111111111;
	for(int i=0;i<n-k+1;i++){
		int t=0;
		for(int j=0;j<k;j++){
			t+=arr[i+j];
		}
		dap=max(dap,t);
	}
	
	printf("%d",dap);
	
	return 0;
}

