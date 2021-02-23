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
	
	long long n; scanf("%lld",&n);
	
	int dp[55]={0,}; dp[0]=1;dp[1]=1;
	
	for(int i=2;i<=50;i++){
		dp[i]=dp[i-1]+dp[i-2]+1;
		dp[i]%=1000000007;
	}
	printf("%lld",dp[n]);
	
	return 0;
}




