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

long long dp[1000002]={0,};
int first=1;

int pr(int n,long long k){
	
	if(n==0){
		return 0;
	}else if(n==1){
		if(first){
			printf("1");first=0;
		}else{
			printf("+1");
		}
		return 0;
	}else if(n==2){
		if(k==1){
			if(first){
				printf("1+1");first=0;
			}else{
				printf("+1+1");
			}
		}else if(k==2){
			if(first){
				printf("2");first=0;
			}else{
				printf("+2");
			}
		}
		return 0;
	}
	
	long long a[3]={0,};
	for(int i=1;i<=3;i++){
		if(n-i>=1){
			a[i-1]=dp[n-i];
		}
	}
	a[1]+=a[0];
	a[2]+=a[1];
	
	if(k<=a[0]){
		if(first){
			printf("1");first=0;
		}else{
			printf("+1");
		}
		pr(n-1,k);
	}else if(k<=a[1]){
		if(first){
			printf("2");first=0;
		}else{
			printf("+2");
		}
		pr(n-2,k-a[0]);
	}else{
		if(first){
			printf("3");first=0;
		}else{
			printf("+3");
		}
		pr(n-3,k-a[1]);
	}
	
	return 0;
	
}

int main(){   
	
	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	for(int i=3;i<1000002;i++){
		dp[i]=dp[i-1]%1000000009+dp[i-2]
		%1000000009+dp[i-3]%1000000009;
		dp[i]%=1000000009;
	}
		
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);	
		printf("%d\n",dp[n]);
		
	}
	
	return 0;
}




