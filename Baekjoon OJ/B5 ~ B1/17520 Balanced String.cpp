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

int dp[100002][3]; 

int main(){
	
	int n;scanf("%d",&n);
	
	dp[1][1]=1; dp[1][2]=1;
	for(int i=2;i<=n;i++){
		dp[i][0]=dp[i-1][1]+dp[i-1][2]; 
		dp[i][1]=dp[i-1][0];
		dp[i][2]=dp[i-1][0];
		dp[i][0]%=16769023;dp[i][1]%=16769023;dp[i][2]%=16769023;
	}
	printf("%d",(dp[n][0]+dp[n][1]+dp[n][2])%16769023);
	
    return 0;
}



