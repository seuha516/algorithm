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
	double past=-1;
	while(1){
		double x; scanf("%lf",&x);
		
		if(x==999){
			break;
		}
		
		if(past!=-1){
			printf("%0.2lf\n",x-past);
		}
		past=x;
	}
	return 0;
}

