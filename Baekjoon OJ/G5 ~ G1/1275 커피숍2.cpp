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

int n,q;

long long tree[4000000];
long long seg_tree[4000000];

long long segtreemake(int st,int end,int node){
	if(st==end){
		return seg_tree[node]=tree[st];
	}else{
		int mid=(st+end)/2;
		return seg_tree[node]=segtreemake(st,mid,2*node)+segtreemake(mid+1,end,2*node+1);
	}
}
long long segfind(int node,int st,int end,int l,int r){
	if(l>end||r<st){
		return 0;
	}else if(l<=st&&end<=r){
		return seg_tree[node];
	}else{
		long long a=segfind(node*2,st,(st+end)/2,l,r);
		long long b=segfind(node*2+1,(st+end)/2+1,end,l,r);
		return a+b;
	}
}
void segchange(int node,int st,int end,int idx,long long dif){
	if(idx<st||idx>end) return;
	else{
		seg_tree[node]+=dif;
		if(st==end) return;
		else{
			segchange(node*2,st,(st+end)/2,idx,dif);
			segchange(node*2+1,(st+end)/2+1,end,idx,dif);
		}
	}
}

int main(){
	
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;i++){
		scanf("%lld",tree+i);
	}
	
	segtreemake(0,n-1,1);
	
	for(int i=0;i<q;i++){
		long long a,b,c,d; scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		if(a>b)swap(a,b);
		printf("%lld\n",segfind(1,0,n-1,a-1,b-1));
		segchange(1,0,n-1,c-1,d-tree[c-1]);
		tree[c-1]=d;
	}

	return 0;
}


