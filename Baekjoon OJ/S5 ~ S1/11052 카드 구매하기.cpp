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
	int arr[1002]={0,};
	for(int i=1;i<=n;i++){
		scanf("%d",arr+i);
	}
	int DP[1002]={0,};
	DP[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=1000&&i-j>=0;j++){
			DP[i]=max(DP[i],DP[i-j]+arr[j]);
		}
	}
	printf("%d",DP[n]);

	
	return 0;
}



