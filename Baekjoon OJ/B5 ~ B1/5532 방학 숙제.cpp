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
	
	int a,b,c,d,e;scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	int aa,bb;
	if(b%d==0){
		aa=b/d;
	}else{
		aa=b/d+1;
	}
	if(c%e==0){
		bb=c/e;
	}else{
		bb=c/e+1;
	}
	printf("%d",a-max(aa,bb));

	return 0;
}
