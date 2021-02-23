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
#include <cmath>

#define TEST 0

using namespace std;

int n,k; vector<int> v; vector<int> dap;
int cache[1002];
int cache2[1002];

int go(int st){ 
	int &ret=cache[st];
	if(ret!=-1)return ret;
	ret=1;
	for(int i=st+1;i<n;i++){
		if(v[st]<v[i]){
			ret=max(ret,go(i)+1);
		}
	}
	return ret;
}
int start(int st){ 
	int &ret=cache2[st];
	if(ret!=-1)return ret;
	if(go(st)==1)return ret=1;
	
	ret=0;
	
	for(int i=st+1;i<n;i++){
		if(v[i]>v[st]&&go(st)==go(i)+1){
			ret=min<long long>(25000000000,(long long)ret+start(i));
		}
	}
	return ret;
	
}

void kth(int st,int k){ 
	
	vector<pair<int,int> > nextlist; 
	
	if(st!=0){dap.push_back(v[st]);}
	
	for(int i=st+1;i<n;i++){
		if(v[i]>v[st]&&go(st)==go(i)+1){
			nextlist.push_back(pair<int,int>(v[i],i));
		}
	}
	
	sort(nextlist.begin(),nextlist.end());
	int nextlist_size=nextlist.size();
	
	for(int i=0;i<nextlist_size;i++){
		if(k<=start(nextlist[i].second)){
			kth(nextlist[i].second,k); break;
		}else{
			k-=start(nextlist[i].second);
		}
	}
	
	return;
	
}

int main(){
	
	int TC; 
	TC=1;
	
	while(TC--){
		
		while(!v.empty())v.pop_back();
		while(!dap.empty())dap.pop_back();
		v.push_back(-100);
		for(int i=0;i<1002;i++){
			cache[i]=-1; cache2[i]=-1;
		}
		
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x);
		}
		n++;
		kth(0,k);
		
		printf("%d",go(0)-1);
		
	}
	
	
    return 0;
}

