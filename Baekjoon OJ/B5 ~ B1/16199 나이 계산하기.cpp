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

	int a,b,c,d,e,f; int d1,d2,d3;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	
	b=100*b+c; e=100*e+f;
	
	d3=d-a;
	
	d2=d3;d1=d3-1;
	if(e>=b){
		d1++;
	}
	
	printf("%d\n%d\n%d",d1,d2+1,d3);	
	
	return 0;
}
 

