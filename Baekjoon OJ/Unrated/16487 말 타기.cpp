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
	
	double a,b,c,m; scanf("%lf %lf %lf %lf",&a,&b,&c,&m);
	
	double n=b-m;

	printf("%0.10lf",(n*a*a+m*c*c)/b - m*n);

	
    return 0;
}



