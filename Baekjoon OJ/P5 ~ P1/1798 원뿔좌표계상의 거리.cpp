#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <complex>

using namespace std;

const double PI = acos(-1);

int main(){
	
	long double r,h,d1,a1,d2,a2;
	while(scanf("%Lf",&r)!=EOF){
		scanf("%Lf %Lf %Lf %Lf %Lf",&h,&d1,&a1,&d2,&a2);
		long double line=sqrt(h*h+r*r);  
		long double angle=abs(a2-a1); if(angle>180.0L) angle=360.0L-angle;
		long double angle2=360.0L*r/line;
		long double A=(angle*angle2/360.0L)*(PI/180.0L);
		long double dap=sqrt(d1*d1+d2*d2-(2*d1*d2*cos(A)));
		//printf("line: %Lf\nangle: %Lf\nangle2: %Lf\nA: %Lf\ndap: %Lf\n",line,angle,angle2,A,dap);
		printf("%.2Lf\n",round(dap*100)/100);
	}
	
	return 0;
}


