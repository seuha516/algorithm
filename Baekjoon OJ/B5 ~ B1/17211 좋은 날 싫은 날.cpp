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

int main(){	
	
	float giboon[150][2];
	
	int n,x; float a,b,c,d;
	scanf("%d %d %f %f %f %f",&n,&x,&a,&b,&c,&d);
	
	if(x){
		giboon[0][0]=1;
		giboon[0][1]=0;
	}else{
		giboon[0][0]=0;
		giboon[0][1]=1;
	}
	for(int i=1;i<=n;i++){
		giboon[i][0]=giboon[i-1][0]*d+giboon[i-1][1]*b;
		giboon[i][1]=giboon[i-1][0]*c+giboon[i-1][1]*a;
	}
	
	int xx=giboon[n][1]*10000;
	int yy=giboon[n][0]*10000;
	
	if(xx%10>4){
		xx+=10;
	}
	if(yy%10>4){
		yy+=10;
	}
	
	printf("%d\n%d",xx/10,yy/10);
	
	
	return 0;
}


