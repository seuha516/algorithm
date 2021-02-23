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
	
	long long aa; long long bb; scanf("%lld %lld",&aa,&bb);
	int m; scanf("%d",&m);
	
	int temp=0;
	
	while(m--){
		long long ttt; scanf("%lld",&ttt);
		temp*=aa;
		temp+=ttt;
	}
	vector <long long> dap;
	while(temp){
		dap.push_back(temp%bb);
		temp/=bb;
	}
	for(int i=dap.size()-1;i>=0;i--){
		printf("%lld ",dap[i]);
	}
	return 0;
	
}




