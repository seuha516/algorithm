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

int arr[1005][1005];

int main() {
	
	int n,k; scanf("%d %d",&n,&k);
	int a=n/2+1,b=n/2+1; int cc=1;
	arr[a][b]=1;
	
	while(1){
		
		for(int i=1;i<=cc;i++){
			arr[a-1][b]=arr[a][b]+1;	a=a-1; b=b;
		}
		
		for(int i=1;i<=cc;i++){
			arr[a][b+1]=arr[a][b]+1;	a=a; b=b+1;
		}
		
		cc++;
		
		if(arr[1][1]!=0)break;
		
		for(int i=1;i<=cc;i++){
			arr[a+1][b]=arr[a][b]+1;a=a+1; b=b;	
		}
		for(int i=1;i<=cc;i++){
			arr[a][b-1]=arr[a][b]+1;	a=a; b=b-1;
		}
		
		cc++;
	}
	
	int dap1=0;int dap2=0;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",arr[i][j]);
			if(arr[i][j]==k){
				dap1=i;dap2=j;
			}
		}printf("\n");
	}printf("%d %d",dap1,dap2);
	
	
	return 0;
}
