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
	
	long long arr [10005]={0,}; arr[0]=1;
	
	long long t=1;
	for(int i=1;i<10005;i++){
		t*=i;
		while(t%10==0){
			t/=10;
		}
		t=t%10000000;
		arr[i]=t%10;
	}
	
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%5d -> %lld\n",n,arr[n]);
	}

	return 0;
}

