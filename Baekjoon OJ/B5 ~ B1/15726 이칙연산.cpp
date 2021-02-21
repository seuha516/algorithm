#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int min(int a,int b){
	if(a<b){
		return a;
	}else{
		return b;
	}	
}



int main() {
	long long int a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	
	long long int x=a*b/c;
	long long int y=a*c/b; 
	if(x>y){
		printf("%lld",x);
	}else{
		printf("%lld",y);
	}
	
}
