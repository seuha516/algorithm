#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>

using namespace std;

vector<int> v;

int cache[55][55];

int go(int st,int end){ //v[st]~v[end]  

	int &ret=cache[st][end]; if(ret!=-987654321)return ret;
	
	if(end-st+1==0){
		return ret=0;
	}else if(end-st+1==1){
		return v[st];
	}
	
	ret=-987654321;
	
	ret=max(ret,0-go(st+2,end));
	ret=max(ret,0-go(st,end-2));
	ret=max(ret,v[st]-go(st+1,end));
	ret=max(ret,v[end]-go(st,end-1));
	
	return ret;
}


int main(){
	
	int TC; scanf("%d",&TC); 
	while(TC--){
		
		while(!v.empty())v.pop_back();
		for(int i=0;i<55;i++){for(int j=0;j<55;j++){cache[i][j]=-987654321;}}
		
		int n; scanf("%d",&n);
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); v.push_back(x);
		}
		
		printf("%d\n",go(0,n-1));
	}
	
	return 0;	
}
