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

using namespace std;

int main(){
	
	int t;scanf("%d",&t);
	while(t--){
		long long a; scanf("%lld",&a);
		
		long long dap=0;
		long long t1=a/3; long long t2=a/7; long long t3=a/21; 
		
		t1=(t1+1)*t1*3/2;
		t2=(t2+1)*t2*7/2;
		t3=(t3+1)*t3*21/2;
		
		printf("%lld\n",t1+t2-t3);
	}
	
	return 0;
}




