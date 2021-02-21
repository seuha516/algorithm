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
#include <set>
#include <functional>

using namespace std;

int main(){
	
	int a,b,c,d,e,f;scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	double t1,t2,t3;
	int x,y,z;
	if(a>=500){
		x=a*10-500;
	}else{
		x=a*10;
	}
	if(c>=500){
		y=c*10-500;
	}else{
		y=c*10;
	}
	if(e>=500){
		z=e*10-500;
	}else{
		z=e*10;
	}
	
	t1=(b*10)/double(x); 
	t2=(d*10)/double(y);
	t3=(f*10)/double(z);
	
	if(t1>t2&&t1>t3){
		printf("S");
	}else if(t2>t3&&t2>t1){
		printf("N");
	}else{
		printf("U");
	}
	
	return 0;
}

