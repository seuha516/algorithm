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
	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	
	if(a+b+c>99){
		printf("OK");
	}else if(a<b&&a<c){
		printf("Soongsil");
	}else if(b<a&&b<c){
		printf("Korea");
	}else if(c<a&&c<b){
		printf("Hanyang");
	}
	
	return 0;
	
}
