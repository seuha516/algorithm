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

using namespace std;

int main(){

	int t; scanf("%d",&t);
	while(t--){
		
		long long a,b,c,d,e,f,g,h; scanf("%lld %lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&g,&h);
		
		long long dd[6]={0,};
		dd[0]=(a-c)*(a-c)+(b-d)*(b-d);
		dd[1]=(a-e)*(a-e)+(b-f)*(b-f);
		dd[2]=(a-g)*(a-g)+(b-h)*(b-h);
		dd[3]=(c-e)*(c-e)+(d-f)*(d-f);
		dd[4]=(c-g)*(c-g)+(d-h)*(d-h);
		dd[5]=(e-g)*(e-g)+(f-h)*(f-h);
		sort(dd,dd+6);
		
		
		if(dd[0]==dd[1]&&dd[0]==dd[2]&&dd[0]==dd[3]&&2*dd[0]==dd[5]&&2*dd[0]==dd[4]){
			printf("1\n");
		}else{
			printf("0\n");
		}
		
	}
	
	return 0;	
}

