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
#include <stack>
using namespace std;

int max(int a,int b){
	if(a>b)return a;
	return b;
}

int main(){
	
	double a,b;
	while(scanf("%lf %lf",&a,&b)!=EOF){
		
		a/=b;
		a*=100;
		a+=0.5;
		int x=(int)a;
		double d=(double)x/(double)100;
		printf("%0.2lf\n",d);
		
	}
	
return 0;}





