#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	
	for(int i=0;i<3;i++){
		int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
		int t=a+b+c+d;
		
		if(t==3){
			printf("A\n");
		}else if(t==2){
			printf("B\n");
		}else if(t==1){
			printf("C\n");
		}else if(t==0){
			printf("D\n");
		}else if(t==4){
			printf("E\n");
		}
		
	}
	return 0;
}
