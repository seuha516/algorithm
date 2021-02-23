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
#include <set>

using namespace std;

template <typename T>
T jari(T x){ // x의 자리수 (x > 0) 
	int ret=0;
	while(x){
		x/=10; ret++;
	}
	return ret;
}
bool ok(int x){
	while(x){
		if(x%10!=1) return 0;
		x/=10;
	}
	return 1;
}


int main(){
	
	int x; 
	while(scanf("%d",&x)!=EOF){
		
		int dap=0;
		int xx=x;
		
		while(1){
			if(ok(x)){
				dap+=jari(x); printf("%d\n",dap); break;
			}
			while(x%10!=1){
				x+=xx;
			}
			x/=10; dap++;
		}	
	}
	
	return 0;	
}



