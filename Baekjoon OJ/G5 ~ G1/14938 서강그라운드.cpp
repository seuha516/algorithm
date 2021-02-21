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

int n,m,r; 
int item[102];
int arr[102][102];

int main(){
	
	scanf("%d %d %d",&n,&m,&r);
	for(int i=1;i<=n;i++){
		scanf("%d",item+i);
		for(int j=1;j<=n;j++){
			arr[i][j]=1<<20;
		}arr[i][i]=0;		
	}
	for(int i=0;i<r;i++){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		arr[a][b]=c;
		arr[b][a]=c;
	}
	
	for(int k=1;k<=n;k++){
		for(int j=1;j<=n;j++){
			for(int i=1;i<=n;i++){
				arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
			}
		}
	}

	int dap=0;
	
	for(int k=1;k<=n;k++){
		int temp=0;
		for(int j=1;j<=n;j++){
			if(arr[k][j]<=m) temp+=item[j];
		}
		dap=max(dap,temp);		
	}
	printf("%d",dap);
   
	return 0;
}

