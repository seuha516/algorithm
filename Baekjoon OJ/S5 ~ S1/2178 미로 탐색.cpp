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

int miro[105][105];
bool visit[105][105];
int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1}; 
int n,m;

int canyoumove(int g, int s, int where){  
	
	if(g+x[where]<0||g+x[where]>n-1||s+y[where]<0||s+y[where]>m-1){
		return 0; 
	}else if(visit[g+x[where]][s+y[where]]){
		return 0;
	}else if(miro[g+x[where]][s+y[where]]){
		return 1;
	}else{
		return 0;
	}
	
}
int main(){
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		char c[105];
		scanf("%s",c);
		for(int j=0;j<m;j++){
			miro[i][j]=c[j]-48;
			visit[i][j]=false;
		}	
	}

	queue <int> s1;
	queue <int> s2;
	s1.push(0); s2.push(0);
	int distance [105][105]={0,};
	visit[0][0]=true;
	
	while(1){
		int a=s1.front(); int b=s2.front();
				
		s1.pop(); s2.pop();
		
		if(a==n&&b==m){
			break;
		}
		
		for(int k=0;k<4;k++){
			if(canyoumove(a,b,k)){
				s1.push(a+x[k]); s2.push(b+y[k]);
				visit[a+x[k]][b+y[k]]=true;
				distance[a+x[k]][b+y[k]]=distance[a][b]+1;
			}	
		}
		if(s1.size()==0){
			break;
		}
	}
	
	printf("%d",distance[n-1][m-1]+1);
	
	return 0;
}

