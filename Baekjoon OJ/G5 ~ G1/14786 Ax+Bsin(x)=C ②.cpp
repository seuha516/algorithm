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
 
long double fx(long double a,long double b,long double x){
	return a*x+b*sin(x);
}

int where=0;

long double find(long double a,long double b,long double st, long double end, long double goal){
	long double gol=goal; long double mid=(st+end)/2;


	if(abs(fx(a,b,mid)-goal)<0.000000001){
		return mid;
	}else if(fx(a,b,mid)<goal){
		if(where==0){
			where=1;
		}
		return find(a,b,mid,end,goal);
	}else{
		if(where==0){
			where=-1;
		}
		return find(a,b,st,mid,goal);
	}
	
}

int main(){	
	
	long double a,b,c; scanf("%Lf %Lf %Lf",&a,&b,&c);
	
	long double actemp=c/a; long double actemp2=c/a;
	
	while((actemp-2*M_PI)>=0){
		actemp-=2*M_PI;
	}
	
	long double howpi=0;
	while((actemp2-M_PI)>=0){
		actemp2-=M_PI; howpi+=M_PI;
	}

	if(actemp>=M_PI){
		printf("%0.12Lf",find(a,b,c/a,howpi+M_PI,c));
	}else{
		printf("%0.12Lf",find(a,b,howpi,c/a,c));
	}
	
	return 0;
}


