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

using namespace std;
	
int d1,d2,d3,d4;
	
int main(){	
	
	d1=1; d2=0; d3=0;
	int n;scanf("%d",&n);
	
	for(int i=0;i<n;i++){

		int t1,t2,t3;
		t1=d1+d2+d3+d4;
		t2=d1+d3;
		t3=d1+d2;
		d1=t1; d2=t2; d3=t3; 
		d1%=9901; d2%=9901; d3%=9901; 
		
	}
	printf("%d",(d1+d2+d3)%9901);
	
	
	return 0;
}




