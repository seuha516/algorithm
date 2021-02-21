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

using namespace std;

int main(){
	double n,b,m;
	while(scanf("%lf %lf %lf",&n,&b,&m)!=EOF){
		b/=100;b+=1;
		int t=0;
		while(n<m){
			n*=b;
			t++;
		}
		printf("%d\n",t);
	}	
	return 0;	
}


