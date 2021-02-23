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

using namespace std;

int arr[1002][1002];
int dap[1002][1002];

int main(){	
	
	int n,m;
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		dap[i][0]=arr[i][0];
	}
	for(int i=1;i<n;i++){
		dap[i][0]=dap[i-1][0]+arr[i][0];
	}
	for(int i=0;i<m;i++){
		dap[0][i]=arr[0][i];
	}
	for(int i=1;i<m;i++){
		dap[0][i]=dap[0][i-1]+arr[0][i];
	}
	
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			dap[i][j]=max(dap[i-1][j],dap[i][j-1])+arr[i][j];
		}
	}
	

	
	printf("%d",dap[n-1][m-1]);
	
	return 0;
}


