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
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

int N; long long K;
vector<pair<int,pair<int,int> > > v;


long long small;
bool same;

void small_amount(int x){
	long long ret=0;
	same=0;
	for(int i=0;i<N;i++){
		int l,m,g; l=v[i].first; m=v[i].second.first; g=v[i].second.second;	
		if(l<x) ret+=(long long)(m/g+1);
		else if(l-m >= x) continue;
		else{
			ret+=(long long)((x-(l-m)-1)/g + 1);
		}
		if(x>=l-m && x<=l && (x-(l-m))%g==0) same=1;
	}
	small = ret;
}


int find(int st,int end){
	if(st==end)return st-1;
	int mid=(st+end)/2;
	
	small_amount(mid);
	
	if(small>K){
		return find(st,mid);
	}else if(small<K){
		return find(mid+1,end);
	}else{
		small_amount(mid-1);
		if(small<K) return mid-1;
		else return find(st,mid);	
	}
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		//초기화
		v.clear(); 
		
		//입력
		scanf("%d %lld",&N,&K);
		for(int i=0;i<N;i++){
			int L, M, G; scanf("%d %d %d",&L,&M,&G);
			v.push_back(make_pair(L,make_pair(M,G)));
		}sort(v.begin(),v.end());
		
		printf("%d\n",find(-1000,10000000));
	}
	
	return 0;
}

