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

int arr[18][18][3];
int map[18][18];

int main(){
	
	int n; scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&map[i][j]);
		}
	}
	
	arr[1][2][0]=1;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1&&j<=2)continue;
			if(map[i][j]==0&&map[i][j-1]==0){
				arr[i][j][0]=arr[i][j-1][0]+arr[i][j-1][2];
			}
			if(map[i][j]==0&&map[i-1][j]==0){
				arr[i][j][1]=arr[i-1][j][1]+arr[i-1][j][2];
			}
			if(map[i][j]==0&&map[i-1][j]==0&&map[i][j-1]==0&&map[i-1][j-1]==0){
				arr[i][j][2]=arr[i-1][j-1][0]+arr[i-1][j-1][1]+arr[i-1][j-1][2];
			}		
		}
	}
	printf("%d",arr[n][n][0]+arr[n][n][1]+arr[n][n][2]);
	
	return 0;
}


