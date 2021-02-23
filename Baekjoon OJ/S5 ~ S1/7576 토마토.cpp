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

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
int m,n;
int arr[1002][1002];
bool ik[1002][1002];

queue <pair<int,int> > q;
pair <int,int> pa;	
	
int can(int a,int b,int where){
	
	int aa=a+x[where]; int bb=b+y[where];
	
	if(aa<0||aa>n-1||bb<0||bb>m-1){
		return 0;
	}else{
		if(ik[aa][bb]||arr[aa][bb]!=0){
			return 0;
		}else{
			return 1;
		}
	}
}

int main(){	

	 scanf("%d %d",&m,&n);
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	vector <int> v;
	v.push_back(0);v.push_back(0);
	int level=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==1){
				q.push(make_pair(i,j)); 
				v[0]++;
			}
		}
	}
	
	
	while(1){
		
		int a=q.front().first; int b=q.front().second;
		q.pop();
		v[level]--;
		
		for(int p=0;p<4;p++){
			if(can(a,b,p)){
				q.push(make_pair(a+x[p],b+y[p])); v[level+1]++;
				arr[a+x[p]][b+y[p]]=1;
				ik[a+x[p]][b+y[p]]=true;
			}
		}
		if(q.size()==0){
			break;
		}
		
		if(v[level]==0){
			level++; v.push_back(0);
		}
	
		
	}
	
	int fail=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==0){
				fail++;
			}
		}
	}
	if(fail){
		printf("-1");
	}else{
		printf("%d",level);
	}
	

	return 0;
}



