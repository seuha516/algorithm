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
	
	int t;scanf("%d",&t);
	while(t--){
		
		long long n,a,b; scanf("%lld %lld %lld",&n,&a,&b);
		long long nn=n;
		
		if(a==0||b==0){
			printf("0\n");continue;
		}
		
		vector<long long> v; vector<long long> vv;
		
		long long cc=0;
		
		while(b){
			if(b%2==1){
				v.push_back(cc); 
			}
			b/=2;cc++;
		}
		
		cc=0;
		while(n){
			if(n%2==1){
				vv.push_back(cc); 
			}
			n/=2;cc++;
		}
		
		printf("%lld\n",nn-v[0]);
	}
	return 0;
}


