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
		int n;scanf("%d",&n);if(!n)break;
		
		int t=1;
		
		for(int i=0;i<n;i++){
			int a,b;scanf("%d %d",&a,&b);
			t*=a;t-=b;
		}
		printf("%d\n",t);
	}
	
	
return 0;}




