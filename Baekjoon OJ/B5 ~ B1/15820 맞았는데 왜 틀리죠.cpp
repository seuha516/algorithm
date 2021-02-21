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

int main(){	

	int a,b,c; scanf("%d %d",&a,&b);
	int end=1;
	for(int i=0;i<a;i++){
		int x,y; scanf("%d %d",&x,&y);
		if(x!=y){
			end=-1; 
		}
	}
	for(int i=0;i<b;i++){
		int x,y; scanf("%d %d",&x,&y);
		if(x!=y&&end!=-1){
			 end=-2;
		}
	}
	if(end==-1){
		printf("Wrong Answer");
	}else if(end<-1){
		printf("Why Wrong!!!");
	}else if(end==1){
		printf("Accepted");
	}

	return 0;
}


