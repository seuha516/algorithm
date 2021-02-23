#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int main() {
	
	vector <int> v;
	v.push_back(1);
	for(int i=2;i<=128;i++){
		v.push_back(v[i-2]+(i*(i+1)/2));
	}
	
	int DP[300005]={0,};
	for(int i=0;i<300005;i++) DP[i]=1<<30;
	
	int n;scanf("%d",&n);
	 
	DP[0]=0;
	DP[1]=1;
	for(int i=2;i<=n;i++){
		for(int j=0;j<v.size()&&i-v[j]>=0;j++){
			DP[i]=min(DP[i],DP[i-v[j]]+1);
		}
	}	
	
	printf("%d",DP[n]);
	
	return 0;
}
