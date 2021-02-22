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
int main() {
	int n,r,c;scanf("%d %d %d",&n,&r,&c);
	
	int t=n*r+c;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i%2==r%2){
				if(j%2==c%2){
					printf("v");
				}else{
					printf(".");
				}
			}else{
				if(j%2!=c%2){
					printf("v");
				}else{
					printf(".");
				}
			}
		}printf("\n");
	}
	return 0;
}
