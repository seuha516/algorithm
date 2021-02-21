#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	
	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	
	int x,y,z;
	
	if(a<=b&&b<=c){
		x=a;
		y=b;
		z=c;
	}else if(a<=c&&c<=b){
		x=a;
		y=c;
		z=b;
	}else if(b<=a&&a<=c){
		x=b;
		y=a;
		z=c;
	}else if(b<=c&&c<=a){
		x=b;
		y=c;
		z=a;
	}else if(c<=a&&a<=b){
		x=c;
		y=a;
		z=b;
	}else{
		x=c;
		y=b;
		z=a;	
	}
	
	if(x==y&&y==z){
		printf("2");
	}else if(x*x+y*y==z*z){
		printf("1");
	}else{
		printf("0");
	}
	
	
	return 0;
}
