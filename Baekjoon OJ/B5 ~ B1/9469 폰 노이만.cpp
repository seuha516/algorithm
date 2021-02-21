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
	
	int t;scanf("%d",&t);
	
	for(int i=1;i<=t;i++){
		double n,d,a,b,f; scanf("%lf %lf %lf %lf %lf",&n,&d,&a,&b,&f);
		printf("%0.0lf ",n);
		double tt=d/(a+b); tt*=f;
		printf("%lf\n",tt);
	}
	
	return 0;
}




