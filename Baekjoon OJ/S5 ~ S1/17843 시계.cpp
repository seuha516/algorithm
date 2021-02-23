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
	
	int t;scanf("%d",&t);
	while(t--){
		
		double a,b,c;scanf("%lf %lf %lf",&a,&b,&c);
		
		double aa=a*30+b*0.5+c*(1/(double)120);
		double bb=b*6+c*0.1;
		double cc=c*6;
		
		double t1=min(abs(aa-bb),360-abs(aa-bb));
		double t2=min(abs(aa-cc),360-abs(aa-cc));
		double t3=min(abs(cc-bb),360-abs(cc-bb));
		
		printf("%lf\n",min(t1,min(t2,t3)));
		
	}
	
	return 0;
}



