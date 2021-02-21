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
int arr[8][8];
int temp[8][8];
int xxxxx[4]={1,-1,0,0};
int yyyyy[4]={0,0,1,-1};
vector <pair <int,int> > virus;
vector <pair <int,int> > none;
int nonenum;
int virusnum;

int main(){
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int x;
			scanf("%d",&x);
			arr[i][j]=x;
			if(x==2){
				virus.push_back(pair<int,int>(i,j));
				virusnum++;
			}
			if(x==0){
				none.push_back(pair<int,int>(i,j));
				nonenum++;
			}
		}
	}
	int mininfect=1<<30; 
	
	for(int i=0;i<nonenum-2;i++){
		for(int j=i+1;j<nonenum-1;j++){
			for(int k=j+1;k<nonenum;k++){
				for(int t1=0;t1<n;t1++){
					for(int t2=0;t2<m;t2++){
						temp[t1][t2]=arr[t1][t2];
					}
				}
				temp[none[i].first][none[i].second]=1;
				temp[none[j].first][none[j].second]=1;
				temp[none[k].first][none[k].second]=1;
				
				bool visit[8][8]={false,};
				
				int thisinfect=0;
				
				for(int u=0;u<virusnum;u++){
					queue <pair<int,int> > q;
					q.push(virus[u]);
					
					while(1){
						int w1=q.front().first; int w2=q.front().second;
						q.pop();
						
						for(int yy=0;yy<4;yy++){
							int ww1=w1+xxxxx[yy]; int ww2=w2+yyyyy[yy];
							if(ww1<0||ww1>n-1||ww2<0||ww2>m-1) continue;
							if(temp[ww1][ww2]>=1||visit[ww1][ww2]) continue;
							q.push(pair<int,int>(ww1,ww2));
							temp[ww1][ww2]=2;
							thisinfect++;
							visit[ww1][ww2]=1;
						}	
						if(q.empty()) break;	
					}	
				}
				mininfect=min(mininfect,thisinfect);
			}
		}
	}
	
	printf("%d",nonenum-mininfect-3);
	
	return 0;
}



