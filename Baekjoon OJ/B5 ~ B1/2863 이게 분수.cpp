#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>

using namespace std;
	
int main(){	
	
	int a,b,c,d; scanf("%d %d %d %d",&a,&b,&c,&d);
	
	int t0=a*b*d+a*b*c;
	int t1=a*c*b+a*c*d;
	int t2=c*d*a+c*d*b;
	int t3=b*d*c+b*d*a;
	
	if(t3>t2&&t3>t1&&t3>t0){
		printf("3");
	}else if(t2>t3&&t2>t1&&t2>t0){
		printf("2");
	}else if(t1>t2&&t1>t3&&t1>t0){
		printf("1");
	}else{
		printf("0");
	}
	
	return 0;
}


