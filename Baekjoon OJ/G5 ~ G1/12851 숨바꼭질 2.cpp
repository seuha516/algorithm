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

int a,b;
int visit [100001];
queue <int> q;

vector <int> dap;

int gaesoo;
int level; int endlevel=1<<30;
int eee[100002];

void BFS(){
	eee[level]--;
	if(level>endlevel) return;
	
	int x=q.front(); q.pop();
	
	if(x==b){
		gaesoo++;
		dap.push_back(level);
		endlevel=min(level,endlevel);
	}
	
	for(int i=0;i<3;i++){
		int nextx;
		if(i==0){
			nextx=x-1;
		}else if(i==1){
			nextx=x+1;
		}else{
			nextx=x*2;
		}
		
		if(nextx<0||nextx>100000){
			continue;
		}
		if(visit[nextx]<level) continue;
		
		eee[level+1]++;
		q.push(nextx); 
		visit[nextx]=level;
		
	}
	
	if(level==0)level++;
	if(eee[level]==0)level++;
	
	if(q.size()==0) return;
	BFS();
		
}

int main(){
	
	scanf("%d %d",&a,&b);
	
	for(int i=0;i<100001;i++){
		visit[i]=1<<30;
	}
	
	q.push(a); visit[a]=1;
	
	if(a==b){
		printf("0\n1");
	}else if(a>b){
		printf("%d\n1",a-b);
	}else{
		BFS();
		printf("%d\n%d",endlevel,gaesoo);
	}
		
	return 0;
}

