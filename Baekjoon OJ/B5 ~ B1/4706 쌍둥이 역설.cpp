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

using namespace std;

int main(){	
	while(1){
		double a,b; scanf("%lf %lf",&a,&b);
		if(a==0&&b==0){
			break;
		}
		double t=b/a; t*=t; t=1-t; t=sqrt(t);
		printf("%0.3lf\n",t);
	}
	return 0;
}

