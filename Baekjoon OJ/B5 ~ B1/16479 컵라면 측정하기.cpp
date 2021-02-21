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

using namespace std;

int main(){	
	long double k,a,b; scanf("%Lf %Lf %Lf",&k,&a,&b);
	
	long double t=abs(b-a)/2;
	
	long double d=k*k-t*t;
	
	printf("%0.12Lf",d);
	
	return 0;
}



