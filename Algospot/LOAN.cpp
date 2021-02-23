#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>

using namespace std;

double n; int m; double p;

int go(double pay){
	int ret=0; double N=n;
	while(1){
		ret++;
		N*=(1.0+(p/100));
		N-=pay;
		if(N<0)break;
		if(ret==1000)break;
	}	
	return ret;
}

double find(double st,double end,int deep){
	if(deep==100)return st;
	double mid=(st+end)/2;
	int x=go(mid);
	if(x<=m) return find(st,mid,deep+1);
	else return find(mid,end,deep+1);	
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		scanf("%lf %d %lf",&n,&m,&p); p/=12;
		printf("%.20lf\n",find(0,200000000.0,0));
	}
	
	return 0;
}
