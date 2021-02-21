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
int arr[101][101];

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};

int ddd=0;

vector <int> ddddd;

int main(){
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int dap=0;
	
	while(1){
	
		int cheese=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]==1) cheese++;
			}
		}
		ddddd.push_back(cheese);
		if(cheese==0) break;
	
		bool visit[101][101]={0,};
		queue <pair<int,int> > q;
		q.push(pair<int,int>(0,0)); visit[0][0]=1; arr[0][0]=7;
		
		while(1){
			int a=q.front().first; int b=q.front().second;
			q.pop();
			for(int i=0;i<4;i++){
				int aa=a+x[i]; int bb=b+y[i];
				if(aa<0||aa>n-1||bb<0||bb>m-1) continue;
				if(!visit[aa][bb]&&!arr[aa][bb]==1){
					q.push(pair<int,int>(aa,bb));
					visit[aa][bb]=1; arr[aa][bb]=7;
				}
			}
			if(q.empty())break;
		}
	
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]==1){
					int around=0;
					for(int kk=0;kk<4;kk++){
						int aaaa=i+x[kk]; int bbbb=j+y[kk];
						if(arr[aaaa][bbbb]==7)around++;
					}
					if(around>=1) arr[i][j]=9;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]>=7) arr[i][j]=0;
			}
		}
		dap++;
	}
	int xxx=0;
	if(ddddd.size()>=2){
		xxx=ddddd[ddddd.size()-2];
	}else{
		xxx=ddddd[0];
	}
	printf("%d\n%d",dap,xxx);
	
	return 0;
}


