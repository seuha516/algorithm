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
	
	int aa=max(b,a-b); int bb=max(c,a-c);
	printf("%d",4*aa*bb);
	
}
