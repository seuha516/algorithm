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
	
	scanf("%d %d",&n,&c);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x);v.push_back(x);
	}sort(v.begin(),v.end());\
	
	if(c==2){
		printf("%d",v[v.size()-1]-v[0]); return 0;
	}
	
	printf("%d",find(0,1000000006));
	
	return 0;
}



