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

using namespace std;

int makecode(int a,int b,int c){
	int ret=0;
	for(int i=0;i<25;i++){
		ret*=2; if(i==a||i==b||i==c) ret++;
	}
	return ret;
}
int makecode(int a,int b){
	int ret=0;
	for(int i=0;i<25;i++){
		ret*=2; if(i==a||i==b) ret++;
	}
	return ret;
}

vector<int>block;

char cache[1<<25];

char canwin(int x){
	
	char &ret=cache[x];
	if(ret!=-1)return ret;
	
	ret=0;
	for(int i=0;i<block.size();i++){
		if((x&block[i])==0){
			if(canwin(x|block[i])==0){
				ret=1; break;
			}
		}
	}
	return ret;
}

int main(){
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			block.push_back(makecode( (5*(i)+(j)),(5*(i+1)+(j)),(5*(i)+(j+1)) ));
			block.push_back(makecode( (5*(i+1)+(j+1)),(5*(i+1)+(j)),(5*(i)+(j+1)) ));
			block.push_back(makecode( (5*(i)+(j)),(5*(i+1)+(j+1)),(5*(i)+(j+1)) ));
			block.push_back(makecode( (5*(i)+(j)),(5*(i+1)+(j)),(5*(i+1)+(j+1)) ));
		}
		for(int j=0;j<5;j++){
			block.push_back(makecode( (5*(i)+(j)),(5*(i+1)+(j))));
			block.push_back(makecode( (5*(j)+(i)),(5*(j)+(i+1))));
		}
	}
	
	for(int i=0;i<(1<<25);i++)cache[i]=-1;
	int TC; scanf("%d",&TC);
	while(TC--){
		
		string s[5]; int x=0;
		for(int i=0;i<5;i++){cin>>s[i];for(int j=0;j<5;j++){x*=2;x+=(s[i][j]=='.')?0:1;}}
		
		if(canwin(x)==1)printf("WINNING\n");
		else printf("LOSING\n");
	}
	
	return 0;	
}
