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
int main() {
	long long int a,b; scanf("%lld %lld",&a,&b);
	
	if(a%2==1){
		a++;
	}
	if(b%2==1){
		b--;
	}
	if(a>b){
		printf("0");
	}else{
		long long int t=(a+b)*((b-a)/2+1)/2;
		if(a<=2){
			t-=2;
		}
		printf("%lld",t);
	}
	return 0;
}
