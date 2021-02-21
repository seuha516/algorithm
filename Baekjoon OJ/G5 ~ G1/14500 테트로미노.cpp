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

using namespace std;

int arr [505][505];
bool visit [505][505];
int n,m;
int maxx;

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};

int can(int a,int b,int where){
	int aa=a+x[where]; int bb=b+y[where];
	if(aa<0||bb<0||aa>n-1||bb>m-1){
		return 0;
	}else{
		if(visit[aa][bb]){
			return 0;
		}else{
			return 1;
		}
	}
}

vector <int> v1;
vector <int> v2;

int DFS(int a, int b){
	if(v1.size()==4){
		int t=arr[v1[0]][v2[0]]+arr[v1[1]][v2[1]]+arr[v1[2]][v2[2]]+arr[v1[3]][v2[3]];
		maxx=max(maxx,t);
		v1.pop_back();v2.pop_back();
		visit[a][b]=false;
		return 0;	
	}
	for(int i=0;i<4;i++){
		if(can(a,b,i)){
			v1.push_back(a+x[i]); v2.push_back(b+y[i]);
			visit[a+x[i]][b+y[i]]=true;
			DFS(a+x[i],b+y[i]);
		}
	}
	v1.pop_back(); v2.pop_back();
	visit[a][b]=false;
	
	return 0;
}

int tspin(int a,int b){
	int k[4];
	for(int i=0;i<4;i++){
		int aa=a+x[i]; int bb=b+y[i];
		if(aa<0||bb<0||aa>n-1||bb>m-1){
			k[i]=0;
		}else{
			k[i]=arr[aa][bb];
		}		
	}
	return k[0]+k[1]+k[2]+k[3]+arr[a][b]-min(k[0],min(k[1],min(k[2],k[3])));
	
}

int main(){	
	
	scanf("%d %d",&n,&m);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	maxx=0;
	for(int k=0;k<n;k++){
		for(int u=0;u<m;u++){

			v1.push_back(k); v2.push_back(u);
			visit[k][u]=true;
			
			DFS(k,u);
			visit[k][u]=false;
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			maxx=max(maxx,tspin(i,j));	
		}
	}
	printf("%d",maxx);
	
	return 0;
}

