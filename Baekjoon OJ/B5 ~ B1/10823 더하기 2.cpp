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
#include <stack>
#include <hash_map>

using namespace std;

int main(){
	
	int k; 
	long long dap=0; long long temp=0;
	
	
	while(1){
		k=getchar(); if(k==EOF) break;
		if(k>='0'&&k<='9'){
			temp*=10; temp+=k-48;
		}else if(k==','){
			dap+=temp;temp=0;
		}
	}
	dap+=temp; printf("%lld",dap);
	
	return 0;
}


