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
#include <random>

using namespace std;

int dp[52][250];

int main(){
	
	int n; scanf("%d",&n);
	int DP[100002]={0,};
	for(int i=1;i<=n;i++){
		int temp=1<<30;
		for(int j=1;i-j*j>=0;j++){
			temp=min(temp,DP[i-j*j]);
		}
		DP[i]=temp+1;
			
	}
	printf("%d",DP[n]);	
	
	
return 0;}


