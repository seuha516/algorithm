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

int arr[12][12];int n;

vector <int> v;
bool visit[12];

int dap=1<<30;

void go(){
	
	if(v.size()==n){
		int temp=0;
		for(int i=0;i<n-1;i++){
			temp+=arr[v[i]][v[i+1]];
		}
		temp+=arr[v[n-1]][v[0]]; if(temp<0)temp=1<<30;
		
		 dap=min(dap,temp);
		 visit[v.back()]=0; v.pop_back();
		return;
	}
	
	for(int i=0;i<n;i++){
		if(v.empty()){
			v.push_back(i); visit[i]=1; go();
		}else{
			if(!visit[i]){
				v.push_back(i); visit[i]=1; go();
			}
		}
	}
	
	if(v.size()){
		visit[v.back()]=0; v.pop_back();
	}
	return;	
}

int main(){
	
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
			if(arr[i][j]==0)arr[i][j]=(-1)*(1<<30);
		}
	}
	
	go();
	
	printf("%d",dap);
	
	return 0;	
}



