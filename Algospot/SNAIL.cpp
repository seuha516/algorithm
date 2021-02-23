#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 0

using namespace std;

int depth, length;
double cache[1005][1005]={0,};

double go(int day,int h){
	double ret=0.0;
	
	if(cache[day][h]!=-1.0){
		return cache[day][h];
	}
	
	if(h>=depth) return cache[day][h]=1.0;
	if(day==length){
		if(h>=depth)return cache[day][h]=1.0;
		else return cache[day][h]=0.0;
	}
	
	ret=go(day+1,h+2)*0.75 + go(day+1,h+1)*0.25;
	
	return cache[day][h]=ret;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		for(int i=0;i<1005;i++){for(int j=0;j<1005;j++)cache[i][j]=-1.0;	}
		scanf("%d %d",&depth,&length);
		printf("%.20lf\n",go(1,1)*0.25+go(1,2)*0.75);

	}
   
    return 0;
}

