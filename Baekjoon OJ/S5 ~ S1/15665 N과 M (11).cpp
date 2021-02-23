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

using namespace std;

int arr[10]; int n,m;
bool visit[10];

vector <int> v;

int go(){
	
	bool vvv[10001]={0,};
	
	if(v.size()==m){
		for(int i=0;i<m;i++){
			printf("%d ",arr[v[i]]);
		}
		printf("\n");
	 
		visit[v.back()]=false; 
		v.pop_back(); 
		return 0;
	}
	for(int i=0;i<n;i++){
		if(vvv[arr[i]]){
			continue;
		}
		
		visit[i]=true;
		v.push_back(i);	
		vvv[arr[i]]=true;
		
		go();	
	}
	
	if(v.empty()) return 0;
	
	visit[v.back()]=false;
	v.pop_back();	
	
	return 0;
}

int main(){	

	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	sort(arr,arr+n);
	
	go();
	
	
	return 0;
}

