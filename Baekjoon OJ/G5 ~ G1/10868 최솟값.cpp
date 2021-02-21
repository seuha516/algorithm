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

int n,m;
int tree[300000];
int seg_tree[300000];

int segtreemake(int st,int end,int node){
	if(st==end){
		return seg_tree[node]=tree[st];
	}else{
		int mid=(st+end)/2;
		return seg_tree[node]=min(segtreemake(st,mid,2*node),segtreemake(mid+1,end,2*node+1));
	}
}
int segfind(int node,int st,int end,int l,int r){
	if(l>end||r<st){
		return 1<<30;
	}else if(l<=st&&end<=r){
		return seg_tree[node];
	}else{
		int a=segfind(node*2,st,(st+end)/2,l,r);
		int b=segfind(node*2+1,(st+end)/2+1,end,l,r);
		return min(a,b);
	}
}

int main(){
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",tree+i);
	}
	
	int height=0; int np=n;
	while(np){
		height++; np/=2;
	}height++;
	
	segtreemake(0,n-1,1);
	
	for(int i=0;i<m;i++){
		int a,b; scanf("%d %d",&a,&b);
		printf("%d\n",segfind(1,0,n-1,a-1,b-1));
	}

	return 0;
}


