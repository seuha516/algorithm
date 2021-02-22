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

long long arr[2005];
long long hap[2005];


int main(){
	
	int n,q; scanf("%d %d",&n,&q);
	for(int i=1;i<=n;i++){
		scanf("%lld",arr+i);
		hap[i]=hap[i-1]+arr[i];
	}
	for(int i=0;i<q;i++){
		int mode; scanf("%d",&mode);
		if(mode==1){
			int t1,t2; scanf("%d %d",&t1,&t2);
			printf("%lld\n",hap[t2]-hap[t1-1]);
			long long temp=arr[t1];
			arr[t1]=arr[t2];
			arr[t2]=temp;
			for(int i=t1;i<=t2;i++){
				hap[i]=hap[i-1]+arr[i];
			}
		}else{
			int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
			printf("%lld\n",hap[b]-hap[a-1]-hap[d]+hap[c-1]);
		}
	}
	
return 0;}


