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

int arr[1005];
int DP[1005];

int main(){
	
	int n;scanf("%d",&n);
	
	int dap=0;
	
	for(int i=1;i<=n;i++){
		scanf("%d",arr+i);
		for(int j=0;j<i;j++){
			if(arr[j]<arr[i]){
				DP[i]=max(DP[i],DP[j]+arr[i]);
			}
		}
		dap=max(dap,DP[i]);
		
	}

	printf("%d",dap);
		
	return 0;
}

