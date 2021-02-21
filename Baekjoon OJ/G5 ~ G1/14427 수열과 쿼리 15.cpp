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

long long tree[400000];
long long seg_tree[400000];

long long segtreemake(int st,int end,int node){
	if(st==end){
		return seg_tree[node]=st;
	}else{
		int mid=(st+end)/2;
		int returnval;
		
		int leftchild=segtreemake(st,mid,2*node);
		int rightchild=segtreemake(mid+1,end,2*node+1);
		
		if(tree[leftchild]<tree[rightchild]){
			returnval=leftchild;
		}else if(tree[leftchild]>tree[rightchild]){
			returnval=rightchild;
		}else{
			returnval=min(leftchild,rightchild);
		}
		
		return seg_tree[node]=returnval;
	}
}
long long segfind(int node,int st,int end,int l,int r){
	if(l>end||r<st){
		return 1<<60;
	}else if(l<=st&&end<=r){
		return seg_tree[node];
	}else{
		long long a=segfind(node*2,st,(st+end)/2,l,r);
		long long b=segfind(node*2+1,(st+end)/2+1,end,l,r);
		
		if(tree[a]<tree[b]){
			return a;
		}else if(tree[a]>tree[b]){
			return b;
		}else{
			return min(a,b);
		}
	}
}
int segchange(int node,int st,int end,int idx,int dif){
	if(idx<st||idx>end||st==end){
		return seg_tree[node];
	}else{
		int a=segchange(node*2,st,(st+end)/2,idx,dif);
		int b=segchange(node*2+1,(st+end)/2+1,end,idx,dif);
		if(tree[a]<tree[b]){
			seg_tree[node]=a;
			return a;
		}else if(tree[a]>tree[b]){
			seg_tree[node]=b;
			return b;
		}else{
			seg_tree[node]=min(a,b);
			return min(a,b);
		}
	}
}

int main(){
	
	int n;scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",tree+i);
	}
	segtreemake(0,n-1,1);
	
	int m;scanf("%d",&m);
	
	for(int i=0;i<m;i++){
		
		int a;scanf("%d",&a);
		if(a==1){
			int b,c; scanf("%d %d",&b,&c);
			tree[b-1]=c;
			segchange(1,0,n-1,b-1,c);
		}else{
			printf("%lld\n",segfind(1,0,n-1,0,n-1)+1);		
		}
	}
	
	return 0;
}

