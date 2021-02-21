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
	
	long long a,b,c,d; scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	
	if(a+d==b+c){
		if(d>b){
			printf("Persepolis");
		}else if(d<b){
			printf("Esteghlal");
		}else{
			printf("Penalty");
		}
	}else if(a+d>b+c){
		printf("Persepolis");
	}else{
		printf("Esteghlal");
	}
	
	
	return 0;
}



