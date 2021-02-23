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

int n,c;
vector<int> v;

int howmany(int d){
	int ret=1;
	int past=v[0];
	for(int i=1;i<v.size();i++){
		if(past+d<=v[i]){
			ret++;
			past=v[i];
		}
	}
	return ret;
}

int find(int st,int end){
	
	if(st==end)return st;
	
	int mid=(st+end)/2;
	
	int x=howmany(mid);
	int next=howmany(mid+1);
	
	if(x<c){
		return find(st,mid);
	}else if(x>c){
		if(next<c) return mid;
		return find(mid+1,end);
	}else{
		if(next<c) return mid;
		else return find(mid+1,end);
	}
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		v.clear();
		scanf("%d %d",&c,&n);
		for(int i=0;i<n;i++){
			double x; scanf("%lf",&x); x*=1000;
			v.push_back((int)x);
		}sort(v.begin(),v.end());
		if(c==2){
			printf("%.2lf\n",(double)(v[v.size()-1]-v[0])/1000); continue;
		}		
		printf("%.2lf\n",(double)find(0,1000000006)/1000);
		
	}

	return 0;
}

