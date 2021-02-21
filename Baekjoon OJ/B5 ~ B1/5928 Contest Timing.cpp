

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int min(int a,int b){
	if(a>b){
		return b;
	}else return a;
}
int max(int a,int b){
	if(a<b){
		return b;
	}else return a;
}

int jari(int a){
	int n=0;
	while(a){
		a/=10;n++;
	}
	return n;
}

int main() {
	
	int a,b,c;scanf("%d %d %d",&a,&b,&c);
	
	int t=1440*a+60*b+c;
	
	if(t<16511){
		printf("-1");
	}else{
		printf("%d",t-16511);
	}
	
}
