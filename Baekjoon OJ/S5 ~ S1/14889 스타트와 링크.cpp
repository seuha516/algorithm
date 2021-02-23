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


int n;
int arr[23][23]={0,};

vector <int> v;
vector <int> vv;

int dap=1<<30;

void go(){
	
	if(v.size()==n/2){
		
		bool visit[24]={0,}; 
		
		while(vv.size())vv.pop_back();
		for(int i=0;i<v.size();i++){
			visit[v[i]]=1;
			//printf("%d ",v[i]);
		}//printf(" / ");
		for(int i=1;i<=n;i++){
			if(!visit[i])vv.push_back(i);
		}
		for(int i=0;i<vv.size();i++){
			//printf("%d ",vv[i]);
		}//printf("\n");
		
		
		
		
		int s1=0,s2=0;
		
		for(int i=0;i<v.size();i++){
			for(int j=i+1;j<v.size();j++){
				s1+=arr[v[i]][v[j]]; s1+=arr[v[j]][v[i]];
			}			
		}
		
		for(int i=0;i<vv.size();i++){
			for(int j=i+1;j<vv.size();j++){
				s2+=arr[vv[i]][vv[j]]; s2+=arr[vv[j]][vv[i]];
			}
		}
		
		//printf("s1=%d, s2=%d\n",s1,s2);
		
		dap=min(dap,abs(s2-s1));
		
		v.pop_back();
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(v.empty()){
			v.push_back(i); go();
		}else{
			if(v.back()<i){
				v.push_back(i); go();
			}
		}
	}
	
	if(!v.empty()) v.pop_back();
	return;
	
}


int main(){
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	go();
	
	printf("%d",dap);
	
	return 0;
}


