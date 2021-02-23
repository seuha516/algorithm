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

bool visit[25];

void ad(int a){
	visit[a]=true;
}
void re(int a){
	visit[a]=false;
}
void ch(int a){
	if(visit[a]){
		printf("1\n");
	}else{
		printf("0\n");
	}
}
void to(int a){
	visit[a]=!visit[a];
}
void al(int a){
	for(int i=0;i<25;i++){
		visit[i]=true;
	}
}
void em(int a){
	for(int i=0;i<25;i++){
		visit[i]=false;
	}
}

int main(){	

	int t; scanf("%d",&t);
	
	string add="add";
	string check="check";
	string remove="remove";
	string toggle="toggle";
	string all="all";
	string empty="empty";
	
	while(t--){
		int d;
		char c[10]; scanf("%s %d",c,&d);
		string str=c;
		
		if(str==add){
			ad(d);
		}else if(str==check){
			ch(d);
		}else if(str==remove){
			re(d);
		}else if(str==toggle){
			to(d);
		}else if(str==all){
			al(d);
		}else{
			em(d);
		}
	}
	
	return 0;
}


