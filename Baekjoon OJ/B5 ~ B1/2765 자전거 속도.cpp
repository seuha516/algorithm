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
	
	double a,b,c;int t=1;
	while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
		if(b==0)break;
		
		a/=(5280*12);
		c/=3600;
		
		double len=a*M_PI*b;
		double speed=floor((len/c)*100+0.5)/100;
		printf("Trip #%d: %0.2lf %0.2lf\n",t,len,speed);
	t++;
	}
	
	
	return 0;
}


