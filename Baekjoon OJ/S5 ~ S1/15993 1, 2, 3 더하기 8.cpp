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
	
	long long dp[100002][2]={0,};
	
	dp[1][0]=0; dp[1][1]=1;
	dp[2][0]=1; dp[2][1]=1;
	dp[3][0]=2; dp[3][1]=2;
	
	for(int i=4;i<100001;i++){
		dp[i][0]=dp[i-1][1]+dp[i-2][1]+dp[i-3][1];
		dp[i][1]=dp[i-1][0]+dp[i-2][0]+dp[i-3][0];
		dp[i][0]%=1000000009;
		dp[i][1]%=1000000009;
	}
	
    int t; scanf("%d",&t);
    while(t--){
    	int n;scanf("%d",&n);
    	printf("%d %d\n",dp[n][1],dp[n][0]);
	}  
  
    return 0;
}


