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
	
	int a,b; scanf("%d %d",&a,&b);
	
	int x1=7000*b;
	int x2=3500*b;
	int x3=1750*b;
	
	if(x1<=1000*a){
		printf("%d",x1);
	}else if(x2<=1000*a){
		printf("%d",x2);
	}else if(x3<=1000*a){
		printf("%d",x3);
	}else{
		printf("0");
	}
	
	
	return 0;
}
