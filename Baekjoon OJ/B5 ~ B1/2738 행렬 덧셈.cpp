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

int arr[150][150];

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int x;scanf("%d",&x);arr[i][j]+=x;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int x;scanf("%d",&x);arr[i][j]+=x;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");
	}
	
	return 0;
}
