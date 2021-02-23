#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstring>

using namespace std;

int map[60][60]={0,};

void DFS(int x,int y){
	if(map[x-1][y]==1){
		map[x-1][y]=0;
		DFS(x-1,y);
	}
	if(map[x+1][y]==1){
		map[x+1][y]=0;
		DFS(x+1,y);
	}
	if(map[x][y-1]==1){
		map[x][y-1]=0;
		DFS(x,y-1);
	}
	if(map[x][y+1]==1){
		map[x][y+1]=0;
		DFS(x,y+1);
	}
}

int num=0;

int main() {
	int n,m,k;
	int t1,t2;
	int test;
	scanf("%d",&test);
	for(int j=1;j<=test;j++){
		num=0;
		for(int yy=0;yy<60;yy++){
			for(int yyy=0;yyy<60;yyy++){
				map[yy][yyy]=0;
			}
		}
		scanf("%d %d %d",&n,&m,&k);
		
		for(int i=1;i<=k;i++){
			scanf("%d %d",&t1,&t2);
			map[t1+1][t2+1]=1;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(map[i][j]==1){
					map[i][j]=0;
					DFS(i,j);			
					num++;
				}
			}
		}
		printf("%d\n",num);
	}
	
	return 0;
}
