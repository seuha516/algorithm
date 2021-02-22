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

char c1[1005];
char c2[1005];

int main(){
	
	double a,b,c,d,e,f;scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	
	double t1=a/d;	double t2=b/e;	double t3=c/f;
	double tt=min(t1,min(t2,t3));
	
	printf("%lf %lf %lf",a-d*tt,b-e*tt,c-f*tt);
	
		
	return 0;
}


