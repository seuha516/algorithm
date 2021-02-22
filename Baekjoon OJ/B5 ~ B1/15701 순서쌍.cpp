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
#include <random>

using namespace std;

int main(){
	
	int t;scanf("%d",&t);
	int dap=0;
	for(int i=1;i<=sqrt(t);i++){
		if(t%i==0){
			if(i==t/i){
					dap++;
			}else{
				dap++;	dap++;
			}
		}
	}
	printf("%d",dap);
	
return 0;}



