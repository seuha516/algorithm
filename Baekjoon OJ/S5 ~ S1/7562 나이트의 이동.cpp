#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int L;
pair<int,int> p1,p2;
int kx_8[8]={-2,-2,-1,-1,1,1,2,2}; int ky_8[8]={1,-1,2,-2,2,-2,1,-1};

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		scanf("%d",&L);
		
		int x1,y1,x2,y2;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		p1=make_pair(x1,y1); p2=make_pair(x2,y2);
		
		queue<pair<int,int> > q;
		bool used[302][302]={0,};
		int dis[302][302]={0,};
		
		q.push(p1);
		used[x1][y1]=1;
		
		while(1){
			int x=q.front().first; int y=q.front().second;
			
			if(q.front()==p2){
				printf("%d\n",dis[x][y]); break;
			}
			
			q.pop();
			
			for(int i=0;i<8;i++){
				int xx=x+kx_8[i]; int yy=y+ky_8[i];
				if(xx<0||xx>L-1||yy<0||yy>L-1) continue;
				if(used[xx][yy])continue;
				used[xx][yy]=1;
				q.push(make_pair(xx,yy));
				dis[xx][yy]=dis[x][y]+1;
				
			}
		}
	}

	return 0;

}


