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
#include <set>

using namespace std;

int m,n;
int arr[15][105];

int ooo(int a,int b){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(((arr[a][i]==arr[a][j])&&(arr[b][i]==arr[b][j]))||
			((arr[a][i]>arr[a][j])&&(arr[b][i]>arr[b][j]))||
			((arr[a][i]<arr[a][j])&&(arr[b][i]<arr[b][j]))){
			}else{
				return 0;
			}
		}	
	}
	return 1;	
}

int main(){
	
	scanf("%d %d",&m,&n);
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	int d=0;
	
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			d+=ooo(i,j);
		}
	}
	printf("%d",d);

	return 0;
}


