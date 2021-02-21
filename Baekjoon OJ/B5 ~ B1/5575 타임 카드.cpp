#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int max(int a,int b){
	if(a>b) return a;
	else return b;
}

int main() {
	
	int arr [3][6];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<6;j++){
			scanf("%d",&arr[i][j]);
		}	
	}
	

	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr[i][j]=arr[i][j+3]-arr[i][j];

		}	

	}

	
	for(int i=0;i<3;i++){
		if(arr[i][2]<0){
			arr[i][2]+=60;arr[i][1]--;
		}
		if(arr[i][1]<0){
			arr[i][1]+=60;arr[i][0]--;
		}
		if(arr[i][0]<0){
			arr[i][0]+=24;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}	
		printf("\n");
	}
	
	
	
	return 0;
}
