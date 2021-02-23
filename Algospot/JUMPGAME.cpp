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

void go (int(*arr)[100],bool(*visited)[100],int x,int y,int n){
	if(visited[x][y])return ;
	visited[x][y]=1;
	if(x+arr[x][y]<n)go(arr,visited,x+arr[x][y],y,n);
	if(y+arr[x][y]<n)go(arr,visited,x,y+arr[x][y],n);	
}

int main(){
   
	int t; scanf("%d",&t);
	while(t--){
		int n; scanf("%d",&n);
		int arr[100][100];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				int x; scanf("%d",&x); arr[i][j]=x;
			}
		}
		bool visited[100][100]={0,};
		go(arr,visited,0,0,n);
		
		if(visited[n-1][n-1]){
			printf("YES\n");
			
		}else{
			printf("NO\n");
		}
	}
	
    return 0;
}
