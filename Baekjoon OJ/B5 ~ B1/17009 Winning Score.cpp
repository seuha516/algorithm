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
	
	int a,b,c,d,e,f; scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	
	int aa=3*a+2*b+c;
	int bb=3*d+e*2+f;
	
	if(aa>bb){
		printf("A");
	}else if(aa==bb){
		printf("T");
	}else{
		printf("B");
	}
	
	return 0;
	
}
