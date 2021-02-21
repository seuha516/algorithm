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

double min(double a,double b){
	if(a>b){
		return b;
	}else return a;
}
double max(double a,double b){
	if(a<b){
		return b;
	}else return a;
}
	
int main(){	
	
	double a,b;scanf("%lf %lf",&a,&b);
	
	double t1=min(a,b/3);
	double t2=min(b,a/3);
	double t3=min(a,b)/2;
	printf("%lf",max(t1,max(t2,t3)));
		
	return 0;
}


