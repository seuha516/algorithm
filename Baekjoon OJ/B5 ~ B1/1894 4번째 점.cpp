#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

#define TEST 0

using namespace std;

int main(){
	while(1){
		double a,b,c,d,e,f,g,h;
		if(scanf("%lf",&a)!=EOF){
			scanf("%lf %lf %lf %lf %lf %lf %lf",&b,&c,&d,&e,&f,&g,&h);
			getchar();
			double x,y;
			double d1,d2;
			if(a==e&&b==f){
				x=a; y=b;
				d1=(c-x)+(g-x)+x; d2=(d-y)+(h-y)+y;
			}else if(a==g&&b==h){
				x=a; y=b;
				d1=(c-x)+(e-x)+x; d2=(d-y)+(f-y)+y;
			}else if(c==e&&d==f){
				x=c; y=d;
				d1=(a-x)+(g-x)+x; d2=(b-y)+(h-y)+y;
			}else{
				x=c; y=d;
				d1=(a-x)+(e-x)+x; d2=(b-y)+(f-y)+y;
			}
			printf("%.3lf %.3lf\n",d1,d2);		
		}else{
			break;
		}
	}
    return 0;
}


