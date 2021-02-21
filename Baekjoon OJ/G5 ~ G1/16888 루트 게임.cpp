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

int dp[1000005];
int main(){
	
	dp[0]=0;
	dp[1]=1;
	dp[2]=0;
	dp[3]=1;
	dp[4]=1;
	dp[5]=0;
	dp[6]=1;
	for(int i=7;i<1000005;i++){
		int ok=1;
		for(int j=1;j*j<=i;j++){
			ok=ok&dp[i-j*j];
		}
		if(ok==0){
			dp[i]=1;
		}else{
			dp[i]=0;
		}
	}

	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		if(dp[n]){
			printf("koosaga\n");
		}else{
			printf("cubelover\n");
		}
	}
		
	return 0;
}


