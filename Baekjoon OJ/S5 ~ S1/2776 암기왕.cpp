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

int arr[1000002];

int find(int v[],int st,int end,int goal){
	
	if(st>end) return 0;		
	int mid=(st+end)/2;	
	int res=v[mid];
	
	if(res==goal){
		return 1;
	}else if(res>goal){
		return find(v,st,mid-1,goal);
	}else if(res<goal){
		return find(v,mid+1,end,goal);
	}
}

int main(){
	
	int tk; scanf("%d",&tk);
	while(tk--){
				
		int n;scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",arr+i);
		}
		sort(arr,arr+n);
		int m;scanf("%d",&m);
		while(m--){
			int x;scanf("%d",&x);
			printf("%d\n",find(arr,0,n-1,x));
		}		
	}
	
return 0;}



