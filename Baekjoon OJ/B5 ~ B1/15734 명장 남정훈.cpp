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

int main(){	

	int a,b,c; scanf("%d %d %d",&a,&b,&c);
	
	int ma=0;
	for(int i=0;i<=c;i++){
		int x=a+i; int y=b+c-i;
		ma=max(ma,min(x,y));
	}
	printf("%d",ma+ma);
	return 0;
}


