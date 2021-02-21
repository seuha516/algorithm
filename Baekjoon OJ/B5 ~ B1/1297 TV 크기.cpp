#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;


int main() {
	
	double a,b,c;scanf("%lf %lf %lf",&a,&b,&c);
	int bbb=b;int ccc=c;
	a=a*a; b=b*b; c=c*c;
	double h=b+c;
	double hh=(double)a/(double)h;
	hh=sqrt(hh);
	
	double aa=hh*bbb; double bb=hh*ccc;
	printf("%d %d",(int)aa,(int)bb);
	return 0;
}
