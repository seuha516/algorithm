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

int main(){	
	
	int n; scanf("%d",&n);
		
	int dp[1005]={0,};
	dp[0]=1; dp[1]=1; dp[2]=3;
		
	for(int i=3;i<=n;i++){
		dp[i]=dp[i-2]%10007+dp[i-2]%10007+dp[i-1]%10007;
		dp[i]%=10007;

	}
	
	printf("%d",dp[n]);
	
	return 0;
}




