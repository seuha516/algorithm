#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 1

using namespace std;

vector<int> h; int n;

int go(int st, int end){
	
	if(st==end) return h[st];
	int ret=0;
	int mid=(st+end)/2;
	
	int left=mid, right=mid+1;
	int sjfqdl=min(h[left],h[right])*2;
	int shvdl=min(h[left],h[right]);
	
	int chleosjfqdl=sjfqdl;
	
	while(left>=st && right <=end){
		if(left==st && right ==end){
			break;
		}else if(left==st){
			right++; shvdl=min(shvdl,h[right]); sjfqdl=shvdl*(right-left+1);
			chleosjfqdl=max(sjfqdl,chleosjfqdl);
		}else if(right==end){
			left--; shvdl=min(shvdl,h[left]); sjfqdl=shvdl*(right-left+1);
			chleosjfqdl=max(sjfqdl,chleosjfqdl);
		}else{
			if(h[right+1] > h[left-1]){
				right++; shvdl=min(shvdl,h[right]); sjfqdl=shvdl*(right-left+1);
				chleosjfqdl=max(sjfqdl,chleosjfqdl);
			}else{
				left--; shvdl=min(shvdl,h[left]); sjfqdl=shvdl*(right-left+1);
				chleosjfqdl=max(sjfqdl,chleosjfqdl);
			}
		}
	}
	
	return max(go(st,mid),max(go(mid+1,end),chleosjfqdl));
}


int main(){
	
	int t; scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); h.push_back(x);
		}
		printf("%d\n",go(0,n-1));
		while(!h.empty())h.pop_back();
	}
	
    return 0;
}
