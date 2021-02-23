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

int n,d,p; 
int adjacent[50];
int connected[50][50];
double cache[105][55];

double go(int x,int t){
	
	double &ret=cache[x][t];
	if(cache[x][t]>-0.5)return ret;
	if(x==0){
		if(t==p) return 1.0;
		else return 0.0;
	}
	
	ret=0.0;
	
	for(int i=0;i<n;i++){
		if(connected[t][i]==1){
			ret+=go(x-1,i)/adjacent[i];
		}
	}
	
	return ret;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		for(int i=0;i<105;i++){for(int j=0;j<55;j++){cache[i][j]=-1.0;	}	}
		for(int i=0;i<50;i++){for(int j=0;j<50;j++){connected[i][j]=0;	}adjacent[i]=0;	}
		scanf("%d %d %d",&n,&d,&p);
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&connected[i][j]);
				if(connected[i][j]) adjacent[i]++;
			}
		}
		int num; scanf("%d",&num);
		for(int i=0;i<num;i++){
			int x; scanf("%d",&x);
			printf("%.10lf ",go(d,x));	
		}printf("\n");
	}
	
    return 0;
}
