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
	
	long double a,b; scanf("%Lf %Lf",&a,&b);
	
	for(int i=0;i<1000;i++){
		long double t1,t2;
		
		t1=(a+b)/2;
		t2=2*a*b/(a+b);
		a=t1; b=t2;
		
	}
	printf("%Lf %Lf",a,b);
	
	return 0;	
}



