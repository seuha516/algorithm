#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;
char arr[52][5][7];

int main(){
	
	int n; scanf("%d",&n);
	
	for(int u=0;u<n;u++){
		for(int i=0;i<5;i++){
			char c[10]={0,}; scanf("%s",c); getchar();
			for(int j=0;j<7;j++){
				arr[u][i][j]=c[j];
			}
		}
	}
	
	int dap=1<<30; int d1,d2;
	for(int v=0;v<n;v++){
		for(int u=v+1;u<n;u++){
			int temp=0;
			for(int i=0;i<5;i++){
				for(int j=0;j<7;j++){
					if(arr[v][i][j]!=arr[u][i][j])temp++;
				}
			}
			if(dap>temp){
				dap=temp;d1=v;d2=u;
			}
		}
	}
	
	printf("%d %d",d1+1,d2+1);
	return 0;
}
