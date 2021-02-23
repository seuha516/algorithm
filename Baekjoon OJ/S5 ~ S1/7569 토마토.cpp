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
int m,n,h;
int arr[101][101][101];
bool ik[101][101][101];

queue <int> q1;
queue <int> q2;
queue <int> q3;

int can(int a,int b,int c,int where){
	
	int aa=a+x[where]; int bb=b+y[where]; int cc=c+z[where];
	
	if(aa<0||aa>n-1||bb<0||bb>m-1||cc<0||cc>h-1){
		return 0;
	}else{
		if(ik[aa][bb][cc]||arr[aa][bb][cc]!=0){
			return 0;
		}else{
			return 1;
		}
	}
}

int main(){	

	 scanf("%d %d %d",&n,&m,&h);
	

	for(int k=0;k<h;k++){
		for(int j=0;j<m;j++){
			for(int i=0;i<n;i++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	
	vector <int> v;
	v.push_back(0);v.push_back(0);
	int level=0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<h;k++){
				if(arr[i][j][k]==1){
					q1.push(i);
					q2.push(j);
					q3.push(k);
					v[0]++;
				}
			}	
		}
	}
	
	while(1){
		
		int a=q1.front(); int b=q2.front(); int c=q3.front();
		q1.pop(); q2.pop(); q3.pop();
		v[level]--;
		
		for(int p=0;p<6;p++){
			
			if(can(a,b,c,p)){
				q1.push(a+x[p]); 
				q2.push(b+y[p]); 
				q3.push(c+z[p]); 
				
				v[level+1]++;
				
				arr[a+x[p]][b+y[p]][c+z[p]]=1;
				ik[a+x[p]][b+y[p]][c+z[p]]=true;
			}
		}
		if(q1.size()==0){
			break;
		}
		if(v[level]==0){
			level++; v.push_back(0);
		}
	}
	
	int fail=0;
	
	for(int k=0;k<h;k++){
		for(int j=0;j<m;j++){
			for(int i=0;i<n;i++){				
				if(arr[i][j][k]==0){
					fail++;
				}
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


