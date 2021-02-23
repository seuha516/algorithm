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
int arr[101][101];
bool visit[101][101];
queue <pair<int,int> > q;

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};


void BFS(){
	int aa=q.front().first; int bb=q.front().second;
	q.pop();
		
	for(int i=0;i<4;i++){
		int aaa=aa+x[i]; int bbb=bb+y[i];
		if(aaa<0||aaa>a-1||bbb<0||bbb>b-1){
			continue;
		}
		if(visit[aaa][bbb]||arr[aaa][bbb]==0){
			continue;
		}
		q.push(pair<int,int>(aaa,bbb)); visit[aaa][bbb]=1;
	}
	
	if(q.empty()) return;
	BFS(); 
}


int main(){
	
	scanf("%d",&a); b=a;

	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int dap=-1;
	
	for(int i=0;i<=100;i++){
		
		for(int j=0;j<a;j++){
			for(int k=0;k<a;k++){
				if(arr[j][k]<=i){
					arr[j][k]=0;
				}
				visit[j][k]=0;
			}
		}
		int gaesoo=0;
		
		while(1){
			
			int pass=0;
			for(int j=0;j<a;j++){
				for(int k=0;k<a;k++){
					if(arr[j][k]!=0&&!visit[j][k]){
						q.push(pair<int,int>(j,k)); visit[j][k]=1; pass=1; gaesoo++;
						break;	
					}
				}if(pass)break;
			}if(pass==0)break;
			BFS();
		}
		dap=max(dap,gaesoo);
		
	}
	
	printf("%d",dap);
	
	
	return 0;
}




