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
	
	long double a,b,c,d,e,f;
	
	while(scanf("%Lf %Lf %Lf %Lf %Lf %Lf",&a,&b,&c,&d,&e,&f)!=EOF){
		long double t1=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		long double t2=sqrt((e-c)*(e-c)+(f-d)*(f-d));
		long double t3=sqrt((a-e)*(a-e)+(b-f)*(b-f));
		long double s=(t1+t2+t3)/2;
		long double sjfqdl=sqrt(s*(s-t1))*sqrt((s-t2)*(s-t3));
		long double r=t1*t2*t3/(4*sjfqdl);
		long double dap=2*r*M_PI*100+0.5;
		double temp=(int)dap;
		printf("%0.2lf\n",temp/100);
	}
	
	return 0;	
}




