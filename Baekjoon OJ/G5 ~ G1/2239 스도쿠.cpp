#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int arr[9][9];

bool hang[9][9];
bool yeol[9][9];
bool nemo[9][9];

vector <pair<int,int> > v;

void pr(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			printf("%d",arr[i][j]);
		}printf("\n");
	}	
}

int ff=0;

void go(int lev){
	
	if(ff==1) return;
	
	if(lev==v.size()){
		pr();ff=1;return;
	}
	
	int x=v[lev].first; int y=v[lev].second;
	
	for(int i=1;i<=9;i++){
		if(hang[x][i]||yeol[y][i]||nemo[(x/3)*3+(y/3)][i]) continue;
	
		arr[x][y]=i; 
		hang[x][i]=1;	yeol[y][i]=1;	nemo[(x/3)*3+(y/3)][i]=1;
				
		go(lev+1);
		hang[x][i]=0;	yeol[y][i]=0;	nemo[(x/3)*3+(y/3)][i]=0;
	}
	
	return;	
}


int main() {
	
	for(int i=0;i<9;i++){
		int dd; scanf("%d",&dd);
		int ss=100000000;
		for(int j=0;j<9;j++){
			arr[i][j]=dd/ss;
			//printf("arr[%d][%d]=%d\n",i,j,dd/ss);
			dd%=ss;
			if(arr[i][j]!=0){
				hang[i][arr[i][j]]=1;
				yeol[j][arr[i][j]]=1;
				nemo[(i/3)*3+(j/3)][arr[i][j]]=1;
			}else{
				v.push_back(pair<int,int>(i,j));
			}
			ss/=10;
		}
	}
	
	if(v.size()==0){
		pr(); return 0;
	}
	
	go(0);
	
	return 0;
}
