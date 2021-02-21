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

int main(){
	
	int n;scanf("%d",&n);
	
	while(n--){
		int x;scanf("%d",&x);
		
		if(x==1){
			printf("#\n");
		}else{
			for(int i=0;i<x;i++){
				printf("#");
			}printf("\n");
			for(int j=0;j<x-2;j++){
				for(int i=0;i<x;i++){
					if(i==0||i==x-1) printf("#");
					else printf("J");
				}printf("\n");
			}
			for(int i=0;i<x;i++){
				printf("#");
			}printf("\n");
		}
		
		printf("\n");
	}
	
	return 0;
}



