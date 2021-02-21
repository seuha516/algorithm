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
	
	int arr [2][4];
	
	int hap[2];
	for(int i=0;i<2;i++){
		hap[i]=0;
		for(int j=0;j<4;j++){
			scanf("%d",&arr[i][j]);
			hap[i]+=arr[i][j];
		}	
	}
	printf("%d",max(hap[1],hap[0]));

	
	
	
	return 0;
}
