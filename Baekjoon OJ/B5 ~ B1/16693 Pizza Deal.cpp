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

using namespace std;

int main(){
	
	double a,b,c,d; scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	
	double t1=b/a;
	double t2=d/(M_PI*c*c);
	
	if(t1<t2){
		printf("Slice of pizza");
	}else{
		printf("Whole pizza");
	}

	return 0;
}


