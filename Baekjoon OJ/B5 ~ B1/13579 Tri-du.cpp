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
	
	int a,b; scanf("%d %d",&a,&b);
	
	if(a==b){
		printf("%d",a);
	}else{
		printf("%d",max(a,b));
	}
	
}
