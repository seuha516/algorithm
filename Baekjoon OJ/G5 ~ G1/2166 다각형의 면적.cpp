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
#include <set>
#include <functional>
#include <stack>

using namespace std;

long long ccw(long long x1,long long y1,long long x2,long long y2,long long x3,long long y3){
   long long temp=x1*y2+x2*y3+x3*y1-y1*x2-y2*x3-y3*x1;
   return temp;
}

int main(){
	
	long long  n; scanf("%lld",&n);
	vector <pair<int,int> > v;
	
	for(int i=0;i<n;i++){
		long long a,b; scanf("%lld %lld",&a,&b);
		v.push_back(pair<int,int>(a,b));
	}
	
	long long dap=0;
	
	for(int i=0;i<n-1;i++){
		dap+=ccw(0,0,v[i].first,v[i].second,v[i+1].first,v[i+1].second);		
	}
	dap+=ccw(0,0,v[n-1].first,v[n-1].second,v[0].first,v[0].second);
	if(dap<0){
		dap*=(-1);
	}
	int xxx=0;
	if(dap%2!=0) xxx=1;
	
	printf("%lld",dap/2);
	if(xxx){
		printf(".5");
	}else{
		printf(".0");
	}
		
	return 0;
}

