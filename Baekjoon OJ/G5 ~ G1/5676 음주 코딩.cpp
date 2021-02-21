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

long long tree[100005];
long long seg_tree[400005];
long long lazy[400005];

vector <int> merge_seg_tree[400005];

long long change(long long x){
	if(x>0)return 1;
	else if(x<0)return -1;
	else return 0;
}

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
      return seg_tree[node]=change(tree[st]);
   }else{
      int mid=(st+end)/2;
      return seg_tree[node]=change(segmake(node*2,st,mid)*segmake(node*2+1,mid+1,end));
   }
}
long long segfind(int node,int st,int end,int l,int r){
   if(r<st||l>end){
      return 1;
   }else if(l<=st&&end<=r){
      return change(seg_tree[node]);
   }else{
      int mid=(st+end)/2;
      return change(segfind(node*2,st,mid,l,r)*segfind(node*2+1,mid+1,end,l,r));
   }
}
long long segchange(int node,int st,int end,int idx){
   if(idx<st||idx>end){
      return change(seg_tree[node]);
   }else{
   		
   	if(st==end){
   		return seg_tree[node]=change(tree[st]);
	}
   	int mid=(st+end)/2;
   	return seg_tree[node]=change(segchange(2*node,st,mid,idx)*segchange(2*node+1,mid+1,end,idx));
  	
   }
}

int main(){
	
	int n,k;
	
	while(scanf("%d %d",&n,&k)!=EOF){
	
		for(int i=0;i<100005;i++)tree[i]=0;
		for(int i=0;i<400005;i++)seg_tree[i]=0;
		
		for(int i=0;i<n;i++){
			scanf("%lld",tree+i);
		}
		segmake(1,0,n-1);
		
		for(int i=0;i<k;i++){
			char a;int b,c;getchar();scanf("%c %d %d",&a,&b,&c);
			if(a=='C'){
				tree[b-1]=c;
				segchange(1,0,n-1,b-1);
			}else{
				long long x=segfind(1,0,n-1,b-1,c-1);
				if(x==0){
					printf("0");
				}else if(x>0){
					printf("+");
				}else{
					printf("-");
				}
			}
		}
		printf("\n");

	}

	return 0;
}


