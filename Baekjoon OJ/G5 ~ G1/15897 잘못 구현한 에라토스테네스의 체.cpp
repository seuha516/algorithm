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
	
	long long n; scanf("%lld",&n); long long x=n-1;
	if(n==1){
		printf("1"); return 0;
	}
	vector <long long> v;
	for(long long i=1;i<=sqrt(x);i++){
		if(x/i!=i){
			v.push_back(i);
			v.push_back(x/i);
		}else{
			v.push_back(i);
		}
	}
	sort(v.begin(),v.end());
	
	long long dap=0;
	
	dap+=x;
	for(int i=0;i<v.size()-1;i++){
		long long ttt=(v[i+1]-v[i])*(x/v[i+1]);
		dap+=ttt;
	}

	printf("%lld",dap+n);
	
	return 0;	
}

