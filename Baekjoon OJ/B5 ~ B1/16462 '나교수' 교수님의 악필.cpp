#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
#include <deque>

#define TEST 0
#define intmax 2147483647
#define LIMIT 10000

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	
	int dap=0; int n=TC;
	while(TC--){
		int x;scanf("%d",&x);
		if(x<10){
			if(x==6)x=9;
			dap+=x;
		}else if(x<100){
			int a,b; a=x/10; b=x%10;
			if(a==6)a=9;
			if(b==0||b==6)b=9;
			dap+=a*10+b;
		}else{
			dap+=100;
		}
	}
	double d=dap/(double)n;
	printf("%d",(int)(d+0.5));
	
	
	return 0;	
}


