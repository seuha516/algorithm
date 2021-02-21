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

void pr(int n,int m){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(arr[i][j]>=(1<<28)){
				arr[i][j]=0;
			}
			printf("%d ",arr[i][j]);
		}printf("\n");
	}
}

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			arr[i][j]=1<<28;
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
	
	pr(n,n);
	
	return 0;
}

