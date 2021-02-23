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

int main(){
	int n;scanf("%d",&n);
	
	int DP[100002]={0,};
	
	DP[1]=1;DP[2]=1;DP[3]=2;DP[4]=2;DP[5]=1;DP[6]=2;DP[7]=1;
	for(int i=8;i<=100001;i++){
		DP[i]=min(DP[i-7],min(DP[i-5],min(DP[i-2],DP[i-1])))+1;
	}
	printf("%d",DP[n]);
	
	return 0;
}


