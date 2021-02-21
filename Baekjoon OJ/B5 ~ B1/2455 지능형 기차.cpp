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
	int d=0; int m=0;
	int t=4; while(t--){
		int a,b;scanf("%d %d",&a,&b);
		d-=a;d+=b;m=max(m,d);
	}
	printf("%d",m);
		
	return 0;
}



