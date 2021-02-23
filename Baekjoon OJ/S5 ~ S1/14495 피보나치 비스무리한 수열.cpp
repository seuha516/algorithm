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
	
	long long a;
	
	scanf("%lld",&a); 
		
		vector <long long> DP;
		DP.push_back(1); DP.push_back(1); DP.push_back(1);DP.push_back(2);
		
		for(int i=4;i<=a;i++){
			DP.push_back(DP[i-1]+DP[i-3]);
		}
	
	printf("%lld\n",DP[a-1]);
	
	
	return 0;
}



