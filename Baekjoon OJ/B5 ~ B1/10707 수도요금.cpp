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
	int a,b,c,d,e; scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	int t=min(a*e,b+d*max(0,e-c));
	
	printf("%d",t);
	
}
