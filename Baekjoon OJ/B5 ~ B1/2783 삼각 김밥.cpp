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


int main(){	

	double list[105];
	
	double aa,bb;
	scanf("%lf %lf",&aa,&bb);
	list[0]=aa/bb*1000;
	
	int n;scanf("%d",&n);int k=1; int nn=n;
	while(n--){
		double a,b;
		
		scanf("%lf %lf",&a,&b);
		list[k++]=a/b*1000;
	}
	
	double mn=196162626;
	
	for(int i=0;i<=nn;i++){
		mn=min(mn,list[i]);
	}
	
	printf("%lf",mn);

	return 0;
}


