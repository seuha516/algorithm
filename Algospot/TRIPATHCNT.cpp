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

int cache[101][101];
int cache2[101][101];

int go(int (*arr)[101],int x,int y,int n){
	if(x==n-1)	return cache[x][y]=arr[x][y];
	if(cache[x][y]!=-1) return cache[x][y];
	int ret=0;
	ret=max(go(arr,x+1,y,n),go(arr,x+1,y+1,n))+arr[x][y];
	return cache[x][y]=ret;
}

int go2(int (*arr)[101],int x,int y,int n){
	if(x==n-1)	cache2[x][y]=1;
	if(cache2[x][y]!=-1) return cache2[x][y];
	int ret=0;
	if(arr[x+1][y]>=arr[x+1][y+1])ret+=go2(arr,x+1,y,n);
	if(arr[x+1][y]<=arr[x+1][y+1])ret+=go2(arr,x+1,y+1,n);
	return cache2[x][y]=ret;
}


int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		for(int i=0;i<101;i++){
			for(int j=0;j<101;j++){
				cache[i][j]=-1; cache2[i][j]=-1;
			}
		}
		int n; scanf("%d",&n);
		int arr[101][101];
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				scanf("%d",&arr[i][j]);}}
		go(arr,0,0,n); go2(cache,0,0,n);
		
		printf("%d\n",cache2[0][0]);
	}
   
    return 0;
}
