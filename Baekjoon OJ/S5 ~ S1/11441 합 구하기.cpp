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

int arr[100002];
int hap[100002];

int main(){
	
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",arr+i);
		hap[i]=hap[i-1]+arr[i];
	}
	int m;scanf("%d",&m);
	for(int i=0;i<m;i++){
		int a,b;scanf("%d %d",&a,&b);
		printf("%d\n",hap[b]-hap[a-1]);
	}
	
	
	return 0;	
}


