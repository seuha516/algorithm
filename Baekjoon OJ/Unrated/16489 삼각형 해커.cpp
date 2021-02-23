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
	
	long double a,b,c;scanf("%Lf %Lf %Lf",&a,&b,&c);
   
    long double s=(a+b+c)/2;
    long double sjfqdl=sqrt(s*(s-c))*sqrt((s-a)*(s-b)); printf("%0.15Lf\n",sjfqdl);

	long double R=(a*b*c)/(4*sjfqdl);
	long double r=sjfqdl*2/(a+b+c);
	
	long double xx=R*R-2*R*r;
	if(xx<0) xx=0;
	
	printf("%0.15Lf\n",R);
	printf("%0.15Lf\n",r);
	printf("%0.15Lf\n",sqrt(xx));
	printf("%0.15Lf",R+r);
	
	
    return 0;
}


