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
	
	int n; scanf("%d",&n);
	if(n==1){
		printf("0");
	}else if(n==2){
		printf("2");
	}else{
		n-=2;
		long long ret=2;
		for(int i=0;i<n;i++){
			ret*=3; ret%=1000000009;
		}
		printf("%lld",ret);
	}	
	return 0;	
}



