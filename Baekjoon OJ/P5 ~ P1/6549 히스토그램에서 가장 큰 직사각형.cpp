#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <cmath>
#include <utility>
#include <cstdlib>
#include <set>
#include <string.h>
#include <functional>

using namespace std;

long long tree[100005];
long long seg_tree[400005];
long long lazy[4000005];

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
      return seg_tree[node]=min(segmake(node*2,st,mid),segmake(node*2+1,mid+1,end));
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
	
	while(1){
		memset(tree,0LL,sizeof(tree));
		
		int n; scanf("%d",&n); if(n==0) break;
		for(int i=0;i<n;i++){
			scanf("%lld",tree+i);
		}
		tree[n]=-1;
		
		stack <int> s;
		int count=0;
		long long dap=0;
		
		while(1){
			if(s.empty()){
				s.push(count++); continue;
			}
			while(tree[count]<tree[s.top()]){
				long long st,end,garo,height,sjfqdl;
				height=tree[s.top()];
				s.pop();
				end=count-1; 
				if(s.empty()) st=0;
				else st=s.top()+1;
				garo=end-st+1;
				sjfqdl=garo*height;
				dap=max(dap,sjfqdl);
				if(s.empty()) break;
			}
		if(count==n) break;
		s.push(count++);
		}
		
		printf("%lld\n",dap);
	} 
		
	return 0;
}


