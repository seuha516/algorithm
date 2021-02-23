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

int dap=0;

void go(int n,int x){
	if(n==0){
		dap+=(x%3==0);
	}else{
		go(n-1,10*x+0);go(n-1,10*x+1);go(n-1,10*x+2);
	}
}


int main(){
	
	int n; scanf("%d",&n);
	go(n-1,1);
	go(n-1,2);
	printf("%d",dap);
	
	return 0;	
}


