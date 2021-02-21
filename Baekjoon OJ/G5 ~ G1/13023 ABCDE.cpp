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

int n,m; 
vector <int> v[2005];
vector <int> vv;
bool visit[2005];
int ok=0;

void go(){
	if(ok==1)return;
	
	if(vv.size()==5){
		ok=1; return;
	}
	
	if(vv.empty()){
		for(int i=0;i<n;i++){
			vv.push_back(i); visit[i]=1; go();
		}
	}else{
		for(int i=0;i<v[vv.back()].size();i++){
			int x=v[vv.back()][i];
			if(!visit[x]){
				vv.push_back(x); visit[x]=1; go();
			}
		}
	}
	
	if(vv.size()){
		visit[vv.back()]=0;
		vv.pop_back();
	}
	return;
}

int main(){
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		int x,y;scanf("%d %d",&x,&y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	go();
	printf("%d",ok);
	
	return 0;	
}



