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
#include <stack>

using namespace std;

vector <int> v;int n;
bool visit[2000005];

void go(int lev,int res){
	if(lev==n){
		visit[res]=1;
		return;
	}
	go(lev+1,res);
	go(lev+1,res+v[lev]);
}


int main(){
	
	 scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x;scanf("%d",&x); v.push_back(x);
	}
	go(0,0);
		
	for(int i=1;1;i++){
		if(visit[i]==0){
			printf("%d",i); return 0;
		}
	}
		
	return 0;
}


