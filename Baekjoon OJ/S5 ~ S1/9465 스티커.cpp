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

using namespace std;

int main(){   
	
	int t;scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		int arr[2][n];
		for(int j=0;j<2;j++){
			for(int k=0;k<n;k++){
				scanf("%d",&arr[j][k]);	
			}
		}
		int dp[n][3]={0,};
		dp[0][0]=0; dp[0][1]=arr[0][0]; dp[0][2]=arr[1][0];
		for(int j=1;j<n;j++){
			dp[j][0]=max(dp[j-1][0],max(dp[j-1][1],dp[j-1][2]));
			dp[j][1]=max(dp[j-1][0],dp[j-1][2])+arr[0][j];
			dp[j][2]=max(dp[j-1][0],dp[j-1][1])+arr[1][j];
		}	
		printf("%d\n",max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2])));
	}
	
	return 0;
}

