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
#include <stack>

using namespace std;

long long arr[100002];

int main(){
	
	long long n; scanf("%lld",&n);	
	for(int i=0;i<n;i++){
		scanf("%lld",arr+i);
	}
	sort(arr,arr+n);
	
	int max=0;
	long long maxnum=arr[0];
	
	int temp=1;
	for(int i=1;i<n;i++){
		if(arr[i]==arr[i-1]){
			temp++;
			if(max<temp){
				max=temp; maxnum=arr[i];
			}
		}else{
			temp=1;
		}
	}
	printf("%lld",maxnum);
		
	return 0;
}



