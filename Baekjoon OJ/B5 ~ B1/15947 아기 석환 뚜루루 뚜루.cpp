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
	
	int n;scanf("%d",&n);
	
	int a,b; a=n/14 + 1; b=n%14; if(b==0)b=14;
	
	if(b==1){
		printf("baby");
	}else if(b==2){
		printf("sukhwan");
	}else if(b==5){
		printf("very");
	}else if(b==6){
		printf("cute");
	}else if(b==9){
		printf("in");
	}else if(b==10){
		printf("bed");
	}else if(b==13){
		printf("baby");
	}else if(b==14){
		printf("sukhwan");
	}else if(b==3||b==7||b==11){
		int t=a+1;
		if(t>=5){
			printf("tu+ru*%d",t);
		}else{
			printf("tu");
			for(int i=0;i<t;i++){
				printf("ru");
			}
		}	
	}else if(b==4||b==8||b==12){
		int t=a;
		if(t>=5){
			printf("tu+ru*%d",t);
		}else{
			printf("tu");
			for(int i=0;i<t;i++){
				printf("ru");
			}
		}
	}
	
	return 0;	
}
