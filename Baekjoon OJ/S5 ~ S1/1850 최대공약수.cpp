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
	
	unsigned long long a,b;scanf("%llu %llu",&a,&b);
	while(b){
		unsigned long long w=a%b;
		a=b;
		b=w;
	}
	for(unsigned long long i=0;i<a;i++){
		printf("1");
	}
		
	return 0;
}
 
