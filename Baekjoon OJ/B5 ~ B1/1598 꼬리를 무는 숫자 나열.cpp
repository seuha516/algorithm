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

int jari(int a){
	int n=0;
	while(a){
		a/=10;n++;
	}
	return n;
}

int main() {
	
	int a,b; scanf("%d %d",&a,&b);
	
	int aa=a%4; int bb=b%4;
	if(aa==0){
		aa=4;
	}
	if(bb==0){
		bb=4;
	}
	int aaa=a/4; int bbb=b/4;
	if(a%4==0){
		aaa--;
	}
	if(b%4==0){
		bbb--;
	}
	
	printf("%d",abs(aa-bb)+abs(aaa-bbb));
	
}
