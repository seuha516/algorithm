#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 1

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int dp[500]={0,}; int n; scanf("%d",&n);
		 dp[1]=1;  dp[2]=2;
		for(int i=3;i<=n;i++){
			dp[i]=(dp[i-1]+dp[i-2])%1000000007;
		}
		printf("%d\n",dp[n]);
	}
   
    return 0;
}
