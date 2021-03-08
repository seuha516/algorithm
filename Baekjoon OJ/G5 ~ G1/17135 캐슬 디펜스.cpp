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

int n,m,d;
int init[20][20];
int arr[20][20];
int X[3]={0,-1,0}, Y[3]={-1,0,1};

bool isitend(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]) return 0;
		}
	}
	return 1;
}
void attack(){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<m;j++){
			if(i==0) arr[i][j]=0;
			else arr[i][j]=arr[i-1][j];
		}
	}
}
void show(){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

pair<int,int> find_target(pair<int,int> loc){
	queue<pair<int,int>> q; q.push(loc);
	while(!q.empty()){
		int x=q.front().first, y=q.front().second; q.pop();
		if(abs(loc.first-x)+abs(loc.second-y)>d) return {-1,-1};
		if(arr[x][y]==1) return {x,y};
		for(int i=0;i<3;i++){
			int xx=x+X[i], yy=y+Y[i];
			if(xx<0||yy<0||yy>=m) continue;
			q.push({xx,yy});
		}
	}
}

int go(vector<pair<int,int>> arrow){
	int ret=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			arr[i][j]=init[i][j];
		}
	}
	while(!isitend()){
		vector<pair<int,int>> target;
		for(int i=0;i<3;i++) target.push_back(find_target(arrow[i]));
		for(int i=0;i<3;i++){
			int x=target[i].first, y=target[i].second;
			if(x==-1&&y==-1) continue;
			if(arr[x][y]){ret++; arr[x][y]=0;}
		}
		attack();
	}
	return ret;
}

int main(){
	
	scanf("%d %d %d",&n,&m,&d);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int x; scanf("%d",&x); init[i][j]=arr[i][j]=x;
		}
	}
	int dap=0;
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			for(int k=j+1;k<m;k++){
				vector<pair<int,int>> v;
				v.push_back({n,i}); v.push_back({n,j}); v.push_back({n,k});
				dap=max(dap,go(v));
			}
		}
	}
	printf("%d",dap);
	
	return 0;
}

