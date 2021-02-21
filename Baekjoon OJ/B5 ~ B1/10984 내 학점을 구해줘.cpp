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
		int n;scanf("%d",&n); double hak=0; double pyung=0;
		
		while(n--){
			double a,b;
			scanf("%lf %lf",&a,&b);
			hak+=a;
			pyung+=b*a;
		}
		
		printf("%0.0lf %0.1lf\n",hak,pyung/(double)hak);
		
	}

	return 0;
}

