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

int n,m; 

int cache[102][102]; 

int go(vector<long long>&v1, vector<long long>&v2,int p1,int p2){
	
	if(cache[p1][p2]!=-1) return cache[p1][p2];
	
	long long m=min(v1[p1],v2[p2]); long long M=max(v1[p1],v2[p2]);
	int v1s=v1.size(); int v2s=v2.size();
	
	int ret=2;
	for(int i=p1+1;i<v1s;i++){
		if(v1[i]>M)ret=max(ret,go(v1,v2,i,p2)+1);
	}
	for(int i=p2+1;i<v2s;i++){
		if(v2[i]>M)ret=max(ret,go(v1,v2,p1,i)+1);
	}
	return cache[p1][p2]=ret;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		for(int i=0;i<102;i++){for(int j=0;j<102;j++){cache[i][j]=-1;}}
		scanf("%d %d",&n,&m);
		vector<long long> v1; vector<long long> v2; 
		v1.push_back(-999999999999); v2.push_back(-999999999999);
		
		for(int i=0;i<n;i++){
			long long x; scanf("%lld",&x); v1.push_back(x);
		}
		for(int i=0;i<m;i++){
			long long x; scanf("%lld",&x); v2.push_back(x);
		}
		printf("%d\n",go(v1,v2,0,0)-2);
	}	

    return 0;
}
