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
	
	int a1,a2,b1,b2;
	a1=b; a2=a-b; b1=c; b2=a-c;
	
	printf("%d",min(a1,b1)+min(a2,b2));
	
	return 0;
	
}
