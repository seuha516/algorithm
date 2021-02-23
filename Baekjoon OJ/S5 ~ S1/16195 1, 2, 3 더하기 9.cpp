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
	
	long long dp [1005][1005]={0,};
	
	dp[1][1]=1;
	dp[2][1]=1; dp[2][2]=1;
	dp[3][1]=1; dp[3][2]=2;  dp[3][3]=1;
	
	for(int i=4;i<=1004;i++){
		for(int j=1;j<=i;j++){
			dp[i][j]=dp[i-1][j-1]%1000000009+dp[i-2][j-1]%1000000009+dp[i-3][j-1]%1000000009;
			dp[i][j]%1000000009;
		}
	}
    int t; scanf("%d",&t);
    while(t--){
    	int n,m; scanf("%d %d",&n,&m);
    	long long dap=0;
    	for(int i=1;i<=m;i++){
    		dap+=dp[n][i];
    		dap%=1000000009;
		}
		printf("%lld\n",dap%1000000009);
	}  
  
    return 0;
}


