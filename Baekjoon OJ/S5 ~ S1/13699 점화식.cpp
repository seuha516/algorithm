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
	
	long long n; scanf("%d",&n);
	long long x;
	
	long long arr[36]={0,};
	
	arr[0]=1; arr[1]=1; arr[2]=2; arr[3]=5;
	
	for(int i=4;i<=35;i++){
		for(int j=0;j<=i-1;j++){
			arr[i]+=(arr[j]*arr[i-1-j]);
		}
	}
	printf("%lld",arr[n]);
	
	return 0;
}



