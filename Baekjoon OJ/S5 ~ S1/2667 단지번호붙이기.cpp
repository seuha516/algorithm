#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstring>

using namespace std;

int map[27][27]={0,};
int area;

void DFS(int x,int y){
	if(map[x-1][y]==1){
		area++;
		map[x-1][y]=0;
		DFS(x-1,y);
	}
	if(map[x+1][y]==1){
		area++;
		map[x+1][y]=0;
		DFS(x+1,y);
	}
	if(map[x][y-1]==1){
		area++;
		map[x][y-1]=0;
		DFS(x,y-1);
	}
	if(map[x][y+1]==1){
		area++;
		map[x][y+1]=0;
		DFS(x,y+1);
	}
}

int num=0;
int dd[700]={0,};
int c=0;

int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%1d",&map[i][j]);
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			
			if(map[i][j]==1){
				
				area=1;
				map[i][j]=0;
				
				DFS(i,j);			
				num++;
				dd[c++]=area;	
			}
			
		}
	}
	sort(dd,dd+num);
	printf("%d\n",num);
	for(int i=0;i<num;i++){
		printf("%d\n",dd[i]);
	}
	
	
	return 0;
	
}
