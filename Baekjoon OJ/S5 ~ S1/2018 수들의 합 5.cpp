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
	
	long long n;scanf("%lld",&n);
	long long dap=0;
	
	long long temp=0;
	for(int i=1;i<=n;i++){
		temp+=i;
		if(n>=temp){
			if((n-temp)%i==0) dap++;
		}
	}
	printf("%lld",dap);
	
	return 0;
}


