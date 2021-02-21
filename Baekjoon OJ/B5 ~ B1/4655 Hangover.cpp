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
	
	while(1){
		double x;scanf("%lf",&x);if(x==0)break;
		
		for(double i=1;1;i++){
			x-=1.0/(i+1.0);	
			
			if(x<=0.000001){
				printf("%0.0lf card(s)\n",i); break;
			}
		}
	}
	
return 0;}



