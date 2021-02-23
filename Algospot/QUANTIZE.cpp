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

int V(vector<int>&list,int st,int end,int t){
	int ret=0;
	for(int i=st;i<=end;i++){
		ret+= (list[i]-t) * (list[i]-t);
	}
	return ret;
}

int mini(vector<int>&list, int st,int end){
	int t=list[(st+end)/2];
	int now=V(list,st,end,t); int left=V(list,st,end,t-1); int right=V(list,st,end,t+1);
	int ret;
	if(now <= left && now <= right){
		ret=now;
	}else if(now > right){
		t++;
		while(V(list,st,end,t) > V(list,st,end,t+1)){
			t++;
		}
		ret=V(list,st,end,t);
	}else{
		t--;
		while(V(list,st,end,t) > V(list,st,end,t-1)){
			t--;
		}
		ret=V(list,st,end,t);
	}
	
	return ret;
}

int mini2(vector<int>&list, int st,int end){
	int t=list[(st+end)/2];
	int now=V(list,st,end,t); int left=V(list,st,end,t-1); int right=V(list,st,end,t+1);
	int ret;
	if(now <= left && now <= right){
		ret=now;
	}else if(now > right){
		t++;
		while(V(list,st,end,t) > V(list,st,end,t+1)){
			t++;
		}
		ret=V(list,st,end,t);
	}else{
		t--;
		while(V(list,st,end,t) > V(list,st,end,t-1)){
			t--;
		}
		ret=V(list,st,end,t);
	}
	return t;
}


int cache[108][16];

int split(vector<int>&list, int st, int end, int num){
	if(cache[st][num]!=-1)return cache[st][num];
	if(num==1){
		cache[st][num]=mini(list,st,end); return mini(list,st,end);
	}
	int ret=987654321;
	for(int i=st;i<=end-num+1;i++){
		ret=min(ret,mini(list,st,i)+split(list,i+1,end,num-1));
	}
	cache[st][num]=ret;
	return ret;
}

int main(){
	
	int TC; scanf("%d",&TC);

	while(TC--){
		for(int i=0;i<108;i++){
			for(int j=0;j<16;j++){
				cache[i][j]=-1;
			}
		}
		int n,s; scanf("%d %d",&n,&s);
		vector<int> list;
		for(int i=0;i<n;i++){int x; scanf("%d",&x); list.push_back(x);	}
		sort(list.begin(),list.end());
		if(n<=s){
			printf("0\n"); continue;
		}		
		cout << split(list,0,n-1,s) << endl;
	}	
   
    return 0;
}
