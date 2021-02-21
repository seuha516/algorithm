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

int arr[1003][1003];

int main(){
	
	int n,m,x; scanf("%d %d %d",&n,&m,&x);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			arr[i][j]=1<<20;
		}
		arr[i][i]=0;
	}
	while(m--){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		arr[a][b]=min(arr[a][b],c);
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				arr[j][k]=min(arr[j][k],arr[j][i]+arr[i][k]);
			}
		}
	}
	
	int dap=-1;
	for(int i=1;i<=n;i++){
		dap=max(dap,arr[i][x]+arr[x][i]);
	}
	printf("%d",dap);	
	
	return 0;
}

