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

#define TEST 0

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n); int x=1;
	
	while(1){
		if(n>10){
			if(n%10 >= 5)n+=(10-(n%10));
		}else break;
			x*=10;n/=10;
		}printf("%d\n",n*x);
	}
	
    return 0;
}
