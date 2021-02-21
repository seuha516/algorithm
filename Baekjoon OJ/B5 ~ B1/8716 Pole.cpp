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
	
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	
	int a1=min(x1,x2); int a2=max(x1,x2);
	int a3=min(x3,x4); int a4=max(x3,x4);
	int b1=min(y1,y2); int b2=max(y1,y2);
	int b3=min(y3,y4); int b4=max(y3,y4);
	
	int aa1,aa2,aa3,aa4;
	
	if(a1>a3){
		aa1=a3;aa2=a4;
		a3=a1;a4=a2;
		a1=aa1;a2=aa2;
	}
	if(b1>b3){
		aa1=b3;aa2=b4;
		b3=b1;b4=b2;
		b1=aa1;b2=aa2;
	}
	int garo, sero;
	
	if(a3>=a2){
		garo=0;
	}else{
		garo=min(a2,a4)-a3;
		if(garo<0){
			garo=0;
		}
	}
	if(b3>=b2){
		sero=0;
	}else{
		sero=min(b2,b4)-b3;
		if(garo<0){
			garo=0;
		}
	}
	long long int tt=(long long)garo*(long long)sero;
	printf("%lld",tt);

	return 0;
}
