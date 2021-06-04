#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

int x_4[4]={-1,1,0,0}; int y_4[4]={0,0,-1,1};
int box[1005][1005];

int main(){
	
	queue<pair<int,int>> q;
	
	int n,m; scanf("%d %d",&m,&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&box[i][j]);
			if(box[i][j]==1) q.push({i,j});
		}
	}
	
	int day=0;
	while(1){
		int new_tomato=q.size();
		if(new_tomato==0){
			bool complete=true;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(box[i][j]==0) complete=false;
				}
			}
			if(complete) printf("%d",day-1);
			else printf("-1");
			return 0;
		}
		for(int i=0;i<new_tomato;i++){
			for(int j=0;j<4;j++){
				int nx=q.front().first+x_4[j];
				int ny=q.front().second+y_4[j];
				if(nx<0||nx>=n||ny<0||ny>=m) continue;
				if(box[nx][ny]==0){
					box[nx][ny]=1; q.push({nx,ny});
				}
			}
			q.pop();
		}
		day++;
	}

	return 0;
}

