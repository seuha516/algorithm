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

using namespace std;

int map[52][52];
int n,m;

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};

int house1[102]; int house2[102]; int housegaesoo;
int chickhouse1[15]; int chickhouse2[15];
int chickhousegaesoo;

bool closed[15];

int dap=1<<20;
int housenum;

int checkchickendistance(){
	int chickendistanceofcity=0;
	for(int i=0;i<housegaesoo;i++){
		int housetochick=1<<20;
		for(int j=0;j<chickhousegaesoo;j++){
			if(!closed[j]){
				housetochick=min(housetochick,abs(chickhouse1[j]-house1[i])+abs(chickhouse2[j]-house2[i]));
			}
		}	
		chickendistanceofcity+=housetochick;
	}
	return chickendistanceofcity;
}

int openchickhouse;

int openclose(int a){
	if(a==chickhousegaesoo){	
		int result=checkchickendistance();
		dap=min(dap,result);	
		return 0;
	}

	if(openchickhouse-m<chickhousegaesoo-a){
		openclose(a+1);
	}
	if(openchickhouse>m){
		openchickhouse--;
		closed[a]=true;
		map[chickhouse1[a]][chickhouse2[a]]=0;
		openclose(a+1);
		openchickhouse++;
		map[chickhouse1[a]][chickhouse2[a]]=2;
		closed[a]=false;
	}
	
	return 0;
}

int main(){	

	int ttt=0;
	int tttt=0;
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&map[i][j]);
			if(map[i][j]==2){
				chickhouse1[ttt]=i; chickhouse2[ttt++]=j; chickhousegaesoo++;
			}else if(map[i][j]==1){
				house1[tttt]=i; house2[tttt++]=j; housegaesoo++;
			}
		}
	}
	openchickhouse=chickhousegaesoo;
	openclose(0);
	
	printf("%d",dap);
	
	return 0;
}

