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

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC); 
	while(TC--){
		long long t,m,f,c; scanf("%lld %lld %lld %lld",&t,&m,&f,&c);
		long long coupon=(m/t)*c;
		coupon = coupon%f + (coupon/f)*c;
		if(coupon<f){
			printf("0\n");
		}else{
			int chk=(coupon-f)/(f-c); int cp=(coupon-f)%(f-c); coupon=f; coupon+=cp;
			while(coupon >= f){
				int nn=coupon/f;
				chk += nn;
				coupon%=f;
				coupon+=nn*c;
				
			}
			printf("%d\n",chk);
		}
	}
	
	return 0;	
}

