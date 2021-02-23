#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

long long int a,b;
int ok=-1;
int levelup(long long int n,long long int lev){
	if(n>b){
		return 0;
	}
	if(n==b){
		ok=lev;
	}
	levelup(n*2,lev+1);
	levelup(n*10+1,lev+1);
	return 0;
}


int main() {
	
	scanf("%lld %lld",&a,&b);
	
	levelup(a,0);
	if(ok!=-1){
		ok++;
	}
	printf("%d",ok);
	
	return 0;
}
