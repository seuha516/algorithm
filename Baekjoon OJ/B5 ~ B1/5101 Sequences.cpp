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
	
	while(1){
		int a,b,c;scanf("%d %d %d",&a,&b,&c);
		if(a==0&&b==0&&c==0){
			return 0;
		}else{
			if(b==0){
				printf("X\n");
				return 0;
			}
			
			if((c-a)%b==0&&(c-a)/b+1>=1){
				printf("%d\n", (c-a)/b+1);
			}else{
				printf("X\n");
			}
			
		}
		
	}

	
	return 0;
}
