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

long long DP[1005][1005];

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	long long mm=1000000007;
	
	DP[1][1]=(long long)1;
	for(int i=1;i<=n+1;i++){
		for(int j=1;j<=m+1;j++){
			if(i+j==2)continue;
			DP[i][j]=DP[i-1][j]+DP[i][j-1]+DP[i-1][j-1];
			DP[i][j]%=mm;
		}
	}
	printf("%lld",DP[n][m]%mm);
	
	
return 0;}




