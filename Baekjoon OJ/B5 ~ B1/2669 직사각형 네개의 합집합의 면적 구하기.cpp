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

int arr[150][150];

int main(){
	
	for(int i=0;i<4;i++){
		int a,b,c,d;scanf("%d %d %d %d",&a,&b,&c,&d);
		for(int j=a;j<c;j++){
			for(int k=b;k<d;k++){
				arr[j][k]=1;
			}
		}
	}
	int dap=0;
	for(int j=0;j<140;j++){
		for(int k=0;k<140;k++){
			if(arr[j][k]==1)dap++;
		}
	}printf("%d",dap);
	
	return 0;
}
