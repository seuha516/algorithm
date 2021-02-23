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

int main(){	

	int n; scanf("%d",&n);
	
	for(int i=0;i<250;i++){
		if(n==i*i){
			printf("1"); return 0;
		}	
	}
	
	for(int i=0;i<250;i++){
		for(int j=0;j<250;j++){
			if(n-i*i==j*j){
				printf("2"); return 0;
			}	
		}	
	}
	
	for(int k=0;k<250;k++){
		for(int i=0;i<250;i++){
			for(int j=0;j<250;j++){
				if(n-i*i-k*k==j*j){
					printf("3"); return 0;
				}	
			}	
		}
	}
	printf("4");
	
	
	return 0;
}




