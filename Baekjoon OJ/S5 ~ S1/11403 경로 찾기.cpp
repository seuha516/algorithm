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

int arr[104][104];
int dap[104][104];
bool visit[104];

queue <int> q;

int main(){	
			
	int n; scanf("%d",&n);
				
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}	
	}
		
	for(int qq=0;qq<n;qq++){
		
		for(int q=0;q<n;q++){
			visit[q]=false;
		}
		q.push(qq);
		
		while(1){
			int x=q.front();
			q.pop();
			for(int i=0;i<n;i++){
				if(arr[x][i]&&!visit[i]){
					q.push(i); visit[i]=true; dap[qq][i]=1;
				}
			}	
			if(!q.size()){
				break;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",dap[i][j]);
		}	printf("\n");
	}
	
	
	return 0;
}



