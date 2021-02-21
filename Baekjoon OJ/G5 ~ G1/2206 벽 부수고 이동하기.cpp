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

int arr[1001][1001];
queue <int> q1; queue <int> q2; queue <int> q3;
bool visit[1001][1001][2];
int dis[1001][1001][2];

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};

int main(){
	
	int n,m;scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		getchar();
		for(int j=0;j<m;j++){
			scanf("%c",&arr[i][j]);
			arr[i][j]-=48;
		}
	}
	
	q1.push(0);q2.push(0);q3.push(0);
	visit[0][0][0]=1;dis[0][0][0]=1;
	
	int dap=-1;
	
	while(1){
		
		int a=q1.front(); int b=q2.front(); int c=q3.front(); q1.pop(); q2.pop();  q3.pop();

		if(a==n-1&&b==m-1){
			dap=dis[a][b][c]; break;
		}
		
		for(int i=0;i<4;i++){
			int aa=a+x[i]; int bb=b+y[i];
			if(aa<0||aa>n-1||bb<0||bb>m-1) continue;
			if(arr[aa][bb]==0&&visit[aa][bb][c]==0){
				q1.push(aa); q2.push(bb); q3.push(c);
				visit[aa][bb][c]=1; dis[aa][bb][c]=dis[a][b][c]+1;
			}else if(arr[aa][bb]==1&&visit[aa][bb][1]==0&&c==0){
				q1.push(aa); q2.push(bb); q3.push(1);
				visit[aa][bb][c]=1; dis[aa][bb][1]=dis[a][b][c]+1;
			}		
		}
		
		if(q1.empty()) break;
		
	}
	printf("%d",dap);
	
	return 0;
}

