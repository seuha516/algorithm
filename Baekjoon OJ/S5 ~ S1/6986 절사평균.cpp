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

double arr[100002];

int main(){
	
	int n,k; scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%lf",arr+i);
	}
	sort(arr,arr+n);
	
	double temp=0;
	double d1=0,d2=0;
	
	for(int i=k;i<n-k;i++){
		temp+=arr[i];
	}
	d1=temp/(double)(n-(2*k));
	temp=0;
	for(int i=k;i<n-k;i++){
		temp+=arr[i];
	}
	temp+=(arr[k]*k+arr[n-k-1]*k);
	d2=temp/(double)n;
		
	d1*=100; d2*=100; d1+=0.5; d2+=0.5; d1=floor(d1); d2=floor(d2); d1/=100; d2/=100;

	printf("%0.2lf\n%0.2lf",d1,d2);
		
	return 0;
}

