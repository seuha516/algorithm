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

int dx(int a,int n){
	int x=0;int ty=0;
	while(a){
		if(a%10>=8&&n==8){
			return 0;
		}		
		x+=(a%10)*pow(n,ty);
		a/=10;
		ty++;
	}
	return x;
}

int main(){	
	int a; scanf("%d",&a);
	
	while(a--){
		int b,c;
		scanf("%d %d",&b,&c);		
		printf("%d %d %d %d\n",b,dx(c,8),dx(c,10),dx(c,16));
		
	}
	return 0;
}

