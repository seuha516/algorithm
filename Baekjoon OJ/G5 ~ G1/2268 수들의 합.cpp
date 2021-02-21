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

long long tree[1000005];
long long seg_tree[4000005];
long long lazy[4000005];

vector <int> merge_seg_tree[400005];


void merge_segmake(int node,int st,int end){
	if(st==end){
		merge_seg_tree[node].push_back(tree[st]);
	}else{
		int mid=(st+end)/2;
		merge_segmake(node*2,st,mid); merge_segmake(node*2+1,mid+1,end);
		int size1=merge_seg_tree[node*2].size();
		int size2=merge_seg_tree[node*2+1].size();
		int cnt1=0; int cnt2=0;
		while(1){
			if(cnt1==size1){
				for(int i=cnt2;i<merge_seg_tree[node*2+1].size();i++){
					merge_seg_tree[node].push_back(merge_seg_tree[node*2+1][i]);
				}
				break;
			}else if(cnt2==size2){
				for(int i=cnt1;i<merge_seg_tree[node*2].size();i++){
					merge_seg_tree[node].push_back(merge_seg_tree[node*2][i]);
				}
				break;
			}
			int a=merge_seg_tree[node*2][cnt1];
			int b=merge_seg_tree[node*2+1][cnt2];
			if(a<=b){
				merge_seg_tree[node].push_back(a); cnt1++;
			}else if(b<a){
				merge_seg_tree[node].push_back(b); cnt2++;
			}
		}
	}	
}
int merge_segfind(int node,int st,int end,int l,int r,int k){
	if(r<st||l>end){
		return 0;
	}else if(l<=st&&end<=r){
		int retval=0;
		retval=upper_bound(merge_seg_tree[node].begin(),merge_seg_tree[node].end(),k)-merge_seg_tree[node].begin();
		retval=end-st-retval+1;
		return retval;
	}else{
		int mid=(st+end)/2;
		return merge_segfind(node*2,st,mid,l,r,k)+merge_segfind(node*2+1,mid+1,end,l,r,k);
	}
}

void segupdate(int node,int st,int end){
	long long mylazy=lazy[node];
	if(mylazy!=0){
		if(st!=end){
			lazy[node*2]+=mylazy; lazy[node*2+1]+=mylazy;
		}
		seg_tree[node]+=mylazy*(end-st+1);
		lazy[node]=0;
	}
}
long long segmake(int node,int st,int end){
	if(st==end){
		return seg_tree[node]=tree[st];
	}else{
		int mid=(st+end)/2;
		return seg_tree[node]=segmake(node*2,st,mid)+segmake(node*2+1,mid+1,end);
	}
}
long long segfind(int node,int st,int end,int l,int r){
	if(r<st||l>end){
		return 0;
	}else if(l<=st&&end<=r){
		return seg_tree[node];
	}else{
		int mid=(st+end)/2;
		return segfind(node*2,st,mid,l,r)+segfind(node*2+1,mid+1,end,l,r);
	}
}
void segchange(int node,int st,int end,int idx,long long diff){
	if(idx<st||idx>end){
		return;
	}else{
		int mid=(st+end)/2;
		seg_tree[node]+=diff;
		if(st!=end){
			segchange(node*2,st,mid,idx,diff);
			segchange(node*2+1,mid+1,end,idx,diff);
		}		
		return;
	}
}

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		tree[i]=0;
	}
	segmake(1,0,n-1);
	
	for(int i=0;i<m;i++){
		int a,b; long long c; scanf("%d",&a);
		if(a==1){
			scanf("%d %lld",&b,&c);
			long long diff=c-tree[b-1];
			tree[b-1]=c;
			segchange(1,0,n-1,b-1,diff);			
		}else if(a==0){
			int x,y;
			scanf("%d %d",&x,&y);
			if(x>y) swap(x,y);
			printf("%lld\n",segfind(1,0,n-1,x-1,y-1));	
		}
	}
	
	return 0;
}



