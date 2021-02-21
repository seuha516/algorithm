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
	
	long long t;scanf("%lld",&t); t%=1500000;
	long long dp[1500003]={0,}; dp[0]=0; dp[1]=1; dp[2]=1;
	for(int i=3;i<1500002;i++){
		dp[i]=dp[i-1]+dp[i-2];
		dp[i]%=1000000;
	}
	printf("%lld",dp[t]);

	return 0;
}

