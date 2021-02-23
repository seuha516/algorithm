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

#define TEST 0

using namespace std;

int depth, length;
double cache[1005][1005]={0,};

double go(int day,int h){
	double ret=0.0;
	
	if(cache[day][h]!=-1.0){
		return cache[day][h];
	}
	
	if(h>=depth) return cache[day][h]=1.0;
	if(day==length){
		if(h>=depth)return cache[day][h]=1.0;
		else return cache[day][h]=0.0;
	}
	
	ret=go(day+1,h+2)*0.75 + go(day+1,h+1)*0.25;
	
	return cache[day][h]=ret;
	
}

int go(int x){
	if(x>=0) return x%1000000007;
	else{
		while(x<0){
			x+=1000000007;
		}
		return x;
	}
}

int main(){
	
	int dp[105]={0,};
	dp[0]=1; dp[1]=1;
	for(int i=2;i<105;i++){
		dp[i]=dp[i-1]+dp[i-2];
		dp[i]%=1000000007;
	}
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int x; scanf("%d",&x);
		if(x&1)printf("%d\n",go(dp[x]%1000000007-dp[x/2]%1000000007));
		else{
			printf("%d\n",go(dp[x]%1000000007-dp[x/2]%1000000007-dp[x/2 - 1]%1000000007));
		}
	}
   
    return 0;
}
