#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int min(int a,int b){
	if(a>b){
		return b;
	}else return a;
}
int max(int a,int b){
	if(a<b){
		return b;
	}else return a;
}


int main() {
	int ma=-1;
	int arr[9][9];
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			scanf("%d",&arr[i][j]);
			ma=max(ma,arr[i][j]);
		}		
	}
	int ok=0;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(ok){
				break;
			}
			if(ma==arr[i][j]){
				printf("%d\n%d %d",ma,i+1,j+1);
				ok=1;
			}
		}		
	}

}
