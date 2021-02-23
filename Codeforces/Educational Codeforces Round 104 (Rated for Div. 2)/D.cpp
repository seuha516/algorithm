#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>
#include <complex>

using namespace std;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n; scanf("%d",&n);
		n=2*n-1;
		n=(int)(sqrt(n));
		n=(n+1)/2; n--;
		printf("%d\n",max(n,0));		
	}
	
	return 0;
}


