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
	
	long long n; scanf("%lld",&n);
	long long temp=1;
		
	for(int i=1;i<=n;i++){
		temp*=i;
		while(temp%10==0){
			temp/=10;
		}
		temp%=10000000;
	}
	printf("%lld",temp%10);
	
	return 0;
}

