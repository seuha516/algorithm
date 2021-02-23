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

int arr[100002];
int hap[100002];

int main(){
	
	int n,k; scanf("%d",&n); int dap=-1;
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	scanf("%d",&k);
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++){
		if(i==0){
			hap[i]=arr[i];
		}else{
			hap[i]=arr[i]+hap[i-1];
		}
		if(hap[i]+arr[i]*(n-i-1) > k){
			dap=i;
			break;
		}
	}
	
	if(dap==0){
		printf("%d",k/n); return 0;
	}else if(dap==-1){
		printf("%d",arr[n-1]); return 0;
	}else{
		dap--;
	}	
	printf("%d",(k-hap[dap])/(n-1-dap));
	
	return 0;
}


