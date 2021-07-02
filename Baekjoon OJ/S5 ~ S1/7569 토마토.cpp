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

using namespace std;

int x[6]={-1,1,0,0,0,0};
int y[6]={0,0,-1,1,0,0};
int z[6]={0,0,0,0,-1,1};

int m,n,h; int day=0;
int arr[101][101][101];
queue <int> q1;
queue <int> q2;
queue <int> q3;

int main(){	

	scanf("%d %d %d",&n,&m,&h);
	
	for(int k=0;k<h;k++){
		for(int j=0;j<m;j++){
			for(int i=0;i<n;i++){
				scanf("%d",&arr[i][j][k]);
				if(arr[i][j][k]==1){
					q1.push(i);
					q2.push(j);
					q3.push(k);
				}
			}
		}
	}

	while(1){
		int new_tomato=q1.size();
		
		if(new_tomato==0){
			bool complete=true;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					for(int k=0;k<h;k++){
						if(arr[i][j][k]==0) complete=false;
					}
				}
			}
			if(complete) printf("%d",day-1);
			else printf("-1");
			return 0;
		}
		
		for(int i=0;i<new_tomato;i++){
			for(int j=0;j<6;j++){
				int nx=q1.front()+x[j];
				int ny=q2.front()+y[j];
				int nz=q3.front()+z[j];
				if(nx<0||nx>=n||ny<0||ny>=m||nz<0||nz>=h) continue;
				if(arr[nx][ny][nz]==0){
					arr[nx][ny][nz]=1; q1.push(nx); q2.push(ny); q3.push(nz);
				}
			}
			q1.pop(); q2.pop(); q3.pop();
		}
		day++;
		
	}
	

	return 0;
}


