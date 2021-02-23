#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	
	int maxheight=-20;
	int minheight=99999999;
	
	int n,m,b; scanf("%d %d %d",&n,&m,&b);
	int arr[503][503];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
			maxheight=max(maxheight,arr[i][j]);
			minheight=min(minheight,arr[i][j]);
		}	
	}
	
	int anstime=99999999;
	int anshe=0;

	for(int k=minheight;k<=maxheight;k++){
		
		int needblock=0;
		int overblock=0;
		int time=0;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr[i][j]>k){
					overblock+=(arr[i][j]-k);
				}else{
					needblock+=(k-arr[i][j]);
				}
			}	
		}
		time=2*overblock+needblock;
		if(needblock<=b+overblock){
			if(anstime>time){
				anstime=time;
				anshe=k;
			}
			if(anstime==time){
				anstime=time;
				if(anshe<k){
					anshe=k;
				}
			}
		}
	}
	
	printf("%d %d",anstime,anshe);
	
	return 0;
}
