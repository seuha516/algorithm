#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	int x;
	scanf("%d",&x);
	
	for(int i=0;i<x;i++){
		double t;scanf("%lf",&t); t*=0.8; printf("$%0.2lf\n",t);
	}

}

